// Q13. We want to calculate the total marks of each student of a class in Physics,Chemistry and
//  Mathematics and the average marks of the class. The number of students in the class are entered by the
//  user. Create a class named Marks with data members for roll number, name and marks. Create three
//  other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used
//  to define marks in individual subject of each student. Roll number of each student will be generated
//  automatically.13. We want to calculate the total marks of each student of a class in Physics,Chemistry and
//  Mathematics and the average marks of the class. The number of students in the class are entered by the
//  user. Create a class named Marks with data members for roll number, name and marks. Create three
//  other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used
//  to define marks in individual subject of each student. Roll number of each student will be generated
//  automatically.
#include <iostream>
using namespace std;

int rollCounter = 1;

class Marks {
protected:
    int rollNumber;
    string name;
public:
    Marks() {
        rollNumber = rollCounter++;
    }
    void inputName() {
        cout << "Enter name: ";
        cin >> name;
    }
    void displayBasicInfo() {
        cout << "Roll No: " << rollNumber << ", Name: " << name;
    }
};

class Physics : virtual public Marks {
protected:
    float physicsMarks;
public:
    void inputPhysics() {
        cout << "Enter Physics marks: ";
        cin >> physicsMarks;
    }
};

class Chemistry : virtual public Marks {
protected:
    float chemistryMarks;
public:
    void inputChemistry() {
        cout << "Enter Chemistry marks: ";
        cin >> chemistryMarks;
    }
};

class Mathematics : public Physics, public Chemistry {
protected:
    float mathMarks;
    float totalMarks;
public:
    void inputAllMarks() {
        inputName();
        inputPhysics();
        inputChemistry();
        cout << "Enter Mathematics marks: ";
        cin >> mathMarks;
        totalMarks = physicsMarks + chemistryMarks + mathMarks;
    }

    void displayAllMarks() {
        displayBasicInfo();
        cout << ", Physics: " << physicsMarks
             << ", Chemistry: " << chemistryMarks
             << ", Math: " << mathMarks
             << ", Total: " << totalMarks << endl;
    }

    float getTotalMarks() {
        return totalMarks;
    }
};

int main() {
    int num;
    cout << "Enter number of students: ";
    cin >> num;

    Mathematics students[100];  // Max 100 students

    float classTotal = 0;

    for (int i = 0; i < num; ++i) {
        cout << "\nEnter details for student " << (i + 1) << ":\n";
        students[i].inputAllMarks();
        classTotal += students[i].getTotalMarks();
    }

    cout << "\n--- Students Marks Summary ---\n";
    for (int i = 0; i < num; ++i) {
        students[i].displayAllMarks();
    }

    float average = classTotal / num;
    cout << "\nAverage marks of the class: " << average << endl;

    return 0;
}
