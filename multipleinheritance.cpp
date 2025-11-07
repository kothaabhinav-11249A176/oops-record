#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int rno;

public:
    void getstudent()
    {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displaystudent()
    {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

class address
{
private:
    string city;

public:
    void getaddress()
    {
        cout << "\nEnter city: ";
        cin >> city;
    }

    void displayaddress()
    {
        cout << "\nCity: " << city;
    }
};

class account : public student, public address
{
private:
    int tfee, submit, balance;

public:
    void getaccount()
    {
        getstudent();
        getaddress();
        cout << "\nEnter total fee: ";
        cin >> tfee;
        cout << "Enter submitted fee: ";
        cin >> submit;
    }

    void displayaccount()
    {
        displaystudent();
        displayaddress();
        cout << "\nTotal fee: " << tfee;
        cout << "\nSubmitted fee: " << submit;
        balance = tfee - submit;
        cout << "\nBalance fee: " << balance << endl;
    }
};

int main()
{
    account a1;
    a1.getaccount();
    cout << "\n---------------------------------\n";
    a1.displayaccount();
    return 0;
}
