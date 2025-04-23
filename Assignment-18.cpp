//Q.  Write a program to print the names of students by creating a Student class. If no name is passed
//while creating an object of the Student class, then the name should be "Unknown", otherwise the name
//should be equal to the String value passed while creating the object of the Student class.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:
    Student() {
        name = "Unnamed";
    }

    Student(string studentName) {
        name = studentName;
    }

    void showName() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    Student s1;
    Student s2("Amit");

    s1.showName();
    s2.showName();

    return 0;
}

