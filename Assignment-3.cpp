// Q3 An educational institution wishes to maintain a database of its employees. The database is divided into
//  several classes whose hierarchical relationships are shown in following figure. The figure also shows
//  the minimum information required for each class. Specify all classes and define functions to create the
//  database and retrieve individual details as and when needed

#include <iostream>
Using namespace std;
Class StaffMember {
Protected:
    Int empCode;
    String fullName;
Public:
    Void readInfo() {
        Cout << “Enter employee code: “;
        Cin >> empCode;
        Cout << “Enter employee name: “;
        Cin >> fullName;
    }
    Void showInfo() {
        Cout << “Code: “ << empCode << endl;
        Cout << “Name: “ << fullName << endl;
    }
};
Class Educator : public StaffMember {
Protected:
    String taughtSubject, publisher;
Public:
    Void getInput() {
        readInfo();
        cout << “Enter subject taught: “;
        cin >> taughtSubject;
        cout << “Enter publisher name: “;
        cin >> publisher;
    }
    Void showDetails() {
        showInfo();
        cout << “Subject: “ << taughtSubject << endl;
        cout << “Publisher: “ << publisher << endl;
    }
};
Class Manager : public StaffMember {
Protected:
    Char officeGrade;
Public:
    Void getInput() {
        readInfo();
        cout << “Enter grade: “;
        cin >> officeGrade;
    }
    Void showDetails() {
        showInfo();
        cout << “Grade: “ << officeGrade << endl;
    }
};
Class DataEntry : public StaffMember {
Protected:
    Float typingSpeed;
Public:
    Void getInput() {
        readInfo();
        cout << “Enter typing speed (wpm): “;
        cin >> typingSpeed;
    }

    Void showDetails() {
        showInfo();
        cout << “Typing Speed: “ << typingSpeed << “ wpm” << endl;
    }
};
Class Permanent : public DataEntry {
Public:
    Void getInput() {
        DataEntry::getInput();
    }
  
    Void showDetails() {
        DataEntry::showDetails();
    }
};

Class Temporary : public DataEntry {
Protected:
    Float dailyPay;
Public:
    Void getInput() {
        DataEntry::getInput();
        Cout << “Enter daily wages: “;
        Cin >> dailyPay;
    }

    Void showDetails() {
        DataEntry::showDetails();
        Cout << “Daily Wages: Rs. “ << dailyPay << endl;
    }
};

Int main() {
    Educator ed;
    Manager mg;
    Permanent perm;
    Temporary temp;
  
    Cout << “\nEnter Educator details:\n”;
    Ed.getInput();
    Cout << “\nEnter Manager details:\n”;
    Mg.getInput();
    Cout << “\nEnter Permanent Data Entry Operator details:\n”;
    Perm.getInput();
    Cout << “\nEnter Temporary Data Entry Operator details:\n”;
    Temp.getInput();
    Cout << “\n\n--- Displaying All Records ---\n”;
    Cout << “\nEducator:\n”;
    Ed.showDetails();
    Cout << “\nManager:\n”;
    Mg.showDetails();
    Cout << “\nPermanent Typist:\n”;
    Perm.showDetails();
    Cout << “\nTemporary Typist:\n”;
    Temp.showDetails();
    Return 0;
}
