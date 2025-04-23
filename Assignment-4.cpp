// Q4. Hybrid Inheritance
//  Consider a class network of the following figure. The class master derives information from both
//  account and admin classes which in turn derives information from the class person. Define all the four
//  classes and write a program to create, update and display the information contained in master objects.

#include <iostream>
#include <string>
using namespace std;
//base class
class Person {
protected:
    string name_person;
    int age;
public:
    void updatePerson(string n, int a) {
        name_person = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name_person << ", Age: " << age << endl;
    }
};

class Account : virtual public Person {
protected:
    string accNumber;
    double balance;
public:
    void updateAccount(string accNum, double bal) {
        accNumber = accNum;
        balance = bal;
    }

    void displayAccount() {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

class Admin : virtual public Person {
protected:
    string AdminID;
    string role;
public:
    void updateAdmin(string id, string r) {
        adminID = id;
        role = r;
    }

    void displayAdmin() {
        cout << "Admin ID: " << adminID << ", Role: " << role << endl;
    }
};

class Master : public Account, public Admin {
public:
    void updateMaster(string n, int a, string accNum, double bal, string id, string r) {
        updatePerson(n, a);
        updateAccount(accNum, bal);
        updateAdmin(id, r);
    }

    void displayMaster() {
        cout << "Master Information:" << endl;
        displayPerson();
        displayAccount();
        displayAdmin();
    }
};

int main() {
    Master m;
    m.updateMaster("Anushka", 20, "Acc555", 1100.00, "ADM001", "student");
    m.displayMaster();
    return 0;
}
