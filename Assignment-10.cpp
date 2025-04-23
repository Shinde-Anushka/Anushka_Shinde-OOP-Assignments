// 10. The Employee class
// 1. Write the code that declares a class called Employee with these data members: age, yearsOfService,
// and Salary.
// 2. Rewrite the Employee class to make the data members private, and provide public accessor methods
// to get and set each of the data members.
// 3. Write a program with the Employee class that makes two Employees; sets their age,
// YearsOfService, and Salary; and prints their values.
// 4. Continuing from Exercise 3, provide a method of Employee that reports how many thousands of
// dollars the employee earns, rounded to the nearest 1,000.
// 5. Change the Employee class so that you can initialize age, YearsOfService, and Salary when you
// create the employee.

#include <iostream>
using namespace std;

class Employee {
private:
    int age;
    string name;
    double salary;

public:
   
    void setId(int empId) {
        age = empId;
    }

    void setName(string empName) {
        name = empName;
    }

    void setSalary(double empSalary) {
        salary = empSalary;
    }

    int getId() {
        cout<<age<<endl;
        return age;
    }

    string getName() {
        cout<<name<<endl;
        return name;
    }

    double getSalary() {
        cout<<salary<<endl;
        return salary;
    }
};
int main(){
    Employee e1;
    e1.setId(5);
    e1.getId();
    Employee e2;
    e2.setId(7);
    e2.getId();
    return 0;
}
