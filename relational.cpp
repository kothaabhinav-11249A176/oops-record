#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    float height; // in centimeters

public:
    // Constructor
    Student(string n = "", float h = 0.0) {
        name = n;
        height = h;
    }

    // Function to input student details
    void getData() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Height (in cm): ";
        cin >> height;
    }

    // Display function
    void display() const {
        cout << "Name: " << name << ", Height: " << height << " cm" << endl;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Overload '>' operator to compare heights
    bool operator>(const Student &s) const {
        return height > s.height;
    }

    // Overload '<' operator to compare heights
    bool operator<(const Student &s) const {
        return height < s.height;
    }

    // Overload '==' operator to compare heights
    bool operator==(const Student &s) const {
        return height == s.height;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details for first student:\n";
    s1.getData();

    cout << "\nEnter details for second student:\n";
    s2.getData();

    cout << "\n-----------------------------------\n";
    cout << "First Student: ";
    s1.display();
    cout << "Second Student: ";
    s2.display();
    cout << "-----------------------------------\n";

    if (s1 > s2)
        cout << s1.getName() << " is taller than " << s2.getName() << ".\n";
    else if (s1 < s2)
        cout << s2.getName() << " is taller than " << s1.getName() << ".\n";
    else if (s1 == s2)
        cout << "Both " << s1.getName() << " and " << s2.getName() << " are of equal height.\n";

    return 0;
}
