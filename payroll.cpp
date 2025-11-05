#include <iostream>
#include <iomanip>  // for setw and formatting
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    string designation;
    double basicPay;
    double hra, da, pf, grossPay, netPay;

public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore(); // clear input buffer

        cout << "Enter Employee Name: ";
        cin>>name;

        cout << "Enter Designation: ";
        cin>>designation;

        cout << "Enter Basic Pay: ";
        cin >> basicPay;
    }

    void calculatePay() {
        // Sample calculations (you can modify the percentages)
        hra = 0.20 * basicPay;   // 20% of basic
        da  = 0.10 * basicPay;   // 10% of basic
        pf  = 0.08 * basicPay;   // 8% deduction
        grossPay = basicPay + hra + da;
        netPay = grossPay - pf;
    }

    void displayPaySlip() {
        cout << "\n=====================================\n";
        cout << "           EMPLOYEE PAY SLIP          \n";
        cout << "=====================================\n";
        cout << left << setw(20) << "Employee ID: " << empID << endl;
        cout << left << setw(20) << "Name: " << name << endl;
        cout << left << setw(20) << "Designation: " << designation << endl;
        cout << "-------------------------------------\n";
        cout << fixed << setprecision(2);
        cout << left << setw(20) << "Basic Pay" << " : " << basicPay << endl;
        cout << left << setw(20) << "HRA (20%)" << " : " << hra << endl;
        cout << left << setw(20) << "DA (10%)" << " : " << da << endl;
        cout << left << setw(20) << "PF (8%)" << " : " << pf << endl;
        cout << "-------------------------------------\n";
        cout << left << setw(20) << "Gross Pay" << " : " << grossPay << endl;
        cout << left << setw(20) << "Net Pay" << " : " << netPay << endl;
        cout << "=====================================\n";
    }
};

int main() {
    int n;
    cout << "===== EMPLOYEE PAY BILL GENERATOR =====\n";
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n]; // Create array of Employee objects
    cin.ignore(); // clear buffer before getline()

    // Input data for each employee
    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter details for Employee " << i + 1 << " ---\n";
        emp[i].getData();
        emp[i].calculatePay();
    }

    // Display pay slips for all employees
    cout << "\n\n************ EMPLOYEE PAY SLIPS ************\n";
    for (int i = 0; i < n; i++) {
        emp[i].displayPaySlip();
    }

    return 0;
}
