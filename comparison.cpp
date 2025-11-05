#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Default and parameterized constructor
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Function to input time
    void getTime() {
        cout << "Enter Hours: ";
        cin >> hours;
        cout << "Enter Minutes: ";
        cin >> minutes;
        cout << "Enter Seconds: ";
        cin >> seconds;
    }

    // Display time in HH:MM:SS format
    void displayTime() const {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds;
    }

    // Overload '>' operator to compare two Time objects
    bool operator>(const Time &t) const {
        if (hours > t.hours)
            return true;
        else if (hours == t.hours && minutes > t.minutes)
            return true;
        else if (hours == t.hours && minutes == t.minutes && seconds > t.seconds)
            return true;
        else
            return false;
    }
};

int main() {
    Time t1, t2;

    cout << "Enter First Time:\n";
    t1.getTime();

    cout << "\nEnter Second Time:\n";
    t2.getTime();

    cout << "\nFirst Time: ";
    t1.displayTime();
    cout << "\nSecond Time: ";
    t2.displayTime();

    cout << "\n---------------------------------\n";

    if (t1 > t2)
        cout << "First time is greater than second time.\n";
    else if (t2 > t1)
        cout << "Second time is greater than first time.\n";
    else
        cout << "Both times are equal.\n";

    return 0;
}
