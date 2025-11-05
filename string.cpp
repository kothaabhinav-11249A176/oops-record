#include <iostream>
#include <string>
using namespace std;

class AddString {
private:
    string str;

public:
    AddString(string s = "") {
        str = s;
    }
    AddString operator+(const AddString &obj) {
        AddString temp;
        temp.str = str + " " + obj.str;
        return temp;
    }
    void display() {
        cout << str << endl;
    }
};

int main() {
    AddString s1("Hello");
    AddString s2("World");
    cout << "First String: ";
    s1.display();
    cout << "Second String: ";
    s2.display();
    AddString s3 = s1 + s2;
    cout << "\nConcatenated String: ";
    s3.display();
    return 0;
}
