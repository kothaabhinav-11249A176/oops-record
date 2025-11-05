#include <iostream>
using namespace std;

class Point {
private:
    int x, y;  // Data members

public:
    // Default constructor
    Point(int x_val = 0, int y_val = 0) {
        x = x_val;
        y = y_val;
    }

    // Function to get input from the user
    void getData() {
        cout << "Enter the value of x: ";
        cin >> x;
        cout << "Enter the value of y: ";
        cin >> y;
    }

    // Display function
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    // Overload unary minus (-) operator
    Point operator-() const {
        Point temp;
        temp.x = -x;
        temp.y = -y;
        return temp;
    }
};

int main() {
    Point p1, p2;

    cout << "Enter coordinates for point P1:" << endl;
    p1.getData();

    cout << "\nOriginal Point: ";
    p1.display();

    // Apply unary minus operator
    p2 = -p1;

    cout << "After applying unary minus: ";
    p2.display();

    return 0;
}
