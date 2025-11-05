#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Display function
    void display() {
        cout << "Value = " << value << endl;
    }

    // Overload ++ (Prefix)
    void operator++() {
        ++value;  // increment value
    }

    // Overload -- (Prefix)
    void operator--() {
        --value;  // decrement value
    }

    // Overload ++ (Postfix)
    void operator++(int) {
        value++;  // increment value
    }

    // Overload -- (Postfix)
    void operator--(int) {
        value--;  // decrement value
    }
};

int main() {
    Number num(10);

    cout << "Initial value:\n";
    num.display();

    cout << "\nUsing Prefix Increment (++num):\n";
    ++num;
    num.display();

    cout << "\nUsing Postfix Increment (num++):\n";
    num++;
    num.display();

    cout << "\nUsing Prefix Decrement (--num):\n";
    --num;
    num.display();

    cout << "\nUsing Postfix Decrement (num--):\n";
    num--;
    num.display();

    return 0;
}
