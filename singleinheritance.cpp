#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rno;

public:
    void getStudent() {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displayStudent() const {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

class Address : public Student {
private:
    string city;

public:
    void getAddress() {
        getStudent();
        cout << "\nEnter city: ";
        cin >> city;
    }

    void displayAddress() const {
        displayStudent();
        cout << "\nCity: " << city << endl;
    }
};

int main() {
    Address a1;
    a1.getAddress();
    a1.displayAddress();
    return 0;
}
