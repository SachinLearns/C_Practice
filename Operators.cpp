// Program demonstrating various operators in C++
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int a = 10, b = 3;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl << endl;

    // Relational Operators
    cout << "Relational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl << endl;

    // Logical Operators
    bool x = true, y = false;
    cout << "Logical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl << endl;

    // Assignment Operators
    cout << "Assignment Operators:" << endl;
    int c = 5;
    cout << "Initial c = " << c << endl;
    c += 2;
    cout << "After c += 2, c = " << c << endl;
    c *= 3;
    cout << "After c *= 3, c = " << c << endl << endl;

    // Increment and Decrement
    cout << "Increment/Decrement Operators:" << endl;
    int d = 7;
    cout << "Initial d = " << d << endl;
    cout << "d++ = " << d++ << " (post-increment)" << endl;
    cout << "Now d = " << d << endl;
    cout << "++d = " << ++d << " (pre-increment)" << endl;
    cout << "Now d = " << d << endl;

    return 0;
}
