#include <iostream>
using namespace std;

// Call by Value
void modifyByValue(int x) {
    x = x + 10;  // changes only the local copy
    cout << "[Inside modifyByValue] x = " << x << endl;
}

// Call by Reference
void modifyByReference(int &y) {
    y = y + 10;  // changes the original variable
    cout << "[Inside modifyByReference] y = " << y << endl;
}

int main() {
    int a = 5;
    int b = 5;

    cout << "Before modifyByValue: a = " << a << endl;
    modifyByValue(a);
    cout << "After modifyByValue: a = " << a << endl << endl;

    cout << "Before modifyByReference: b = " << b << endl;
    modifyByReference(b);
    cout << "After modifyByReference: b = " << b << endl;

    return 0;
}
