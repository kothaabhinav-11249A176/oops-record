#include <iostream>
using namespace std;
class Student {
private:
    char name[20];
    int rollNo;
public:
    void getStudent() {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudent() {
        cout << "Name of the student: " << name << endl;
        cout << "Roll number: " << rollNo << endl;
    }
};

class BSc : public Student {
private:
    int math, physics, chemistry;

public:
    void getBSc() {
        getStudent();
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter Physics marks: ";
        cin >> physics;
        cout << "Enter Chemistry marks: ";
        cin >> chemistry;
    }

    void displayBSc() {
        displayStudent();
        cout << "Math marks: " << math << endl;
        cout << "Physics marks: " << physics << endl;
        cout << "Chemistry marks: " << chemistry << endl;
    }
};
class BA : public Student {
private:
    int hindi, punjabi;
public:
    void getBA() {
        getStudent();
        cout << "Enter Hindi marks: ";
        cin >> hindi;
        cout << "Enter Punjabi marks: ";
        cin >> punjabi;
    }
    void displayBA() {
        displayStudent();
        cout << "Hindi marks: " << hindi << endl;
        cout << "Punjabi marks: " << punjabi << endl;
    }
};

int main() {
    BSc b1;
    BA b2;
    int choice;
    cout << "1. BSc\n2. BA\nEnter your stream: ";
    cin >> choice;
    if (choice == 1) {
        b1.getBSc();
        cout << "\n--- BSc Student Details ---\n";
        b1.displayBSc();
    } else if (choice == 2) {
        b2.getBA();
        cout << "\n--- BA Student Details ---\n";
        b2.displayBA();
    } else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
