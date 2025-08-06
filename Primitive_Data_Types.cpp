#include <iostream>
#include <iomanip>  // for std::setprecision
using namespace std;

int main() {
    // char: character or small integer
    char ch = 'A';
    unsigned char uch = 200;

    // short: 2-byte integer
    short s = -32768;
    unsigned short us = 65535;

    // int and long: standard integers
    int i = 1000;
    long l = 100000L;
    unsigned long ul = 4294967295;

    // float: single-precision
    float f = 3.14159f;

    // double: double-precision
    double d = 1.732050807568;

    // long double: extended precision
    long double ld = 1.6180339887498948482L;

    // bool: true or false
    bool flag = true;

    // Display the values
    cout << "===== Demonstrating Primary Data Types =====" << endl;
    cout << "char: " << ch << " | ASCII value: " << int(ch) << endl;
    cout << "unsigned char: " << +uch << endl;  // '+' to print as number

    cout << "short: " << s << endl;
    cout << "unsigned short: " << us << endl;

    cout << "int: " << i << endl;
    cout << "long: " << l << endl;
    cout << "unsigned long: " << ul << endl;

    cout << fixed << setprecision(7); // set precision for float
    cout << "float: " << f << endl;

    cout << setprecision(15); // set precision for double
    cout << "double: " << d << endl;

    cout << setprecision(19); // set precision for long double
    cout << "long double: " << ld << endl;

    cout << "bool: " << flag << " (true = 1, false = 0)" << endl;

    return 0;
}
