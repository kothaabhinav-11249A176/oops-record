#include<iostream>
using namespace std;
class student {
private:
    int rollno, m1, m2, m3, total;
    char name[50];
    float avg;
public:
    void getdetails();
    void calculate();
    void display();
};
void student::getdetails() {
    cout << "Enter your rollno: ";
    cin >> rollno;
    cin.ignore(); 
    cout << "Enter your name: ";
    cin.getline(name, 50);

    cout << "Enter your 3 marks: ";
    cin >> m1 >> m2 >> m3;
}
void student::calculate() {
    total = m1 + m2 + m3;
    avg = total / 3.0;  // Use 3.0 to get float division
}
void student::display() {
    cout << "\nStudent Details:\n";
    cout << "Roll No: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Mark 1: " << m1 << endl;
    cout << "Mark 2: " << m2 << endl;
    cout << "Mark 3: " << m3 << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << avg << endl;
}
int main() {
    int i, n;
    cout << "Enter the number of students: ";
    cin >> n;
    student s[100];
    for (i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        s[i].getdetails();
        s[i].calculate();
    }
    cout << "\nDisplaying student details:\n";
    for (i = 0; i < n; i++) {
        s[i].display();
    }
    return 0;
}