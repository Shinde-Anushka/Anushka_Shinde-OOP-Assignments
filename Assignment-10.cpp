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
