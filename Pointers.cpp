#include <iostream>
using namespace std;

int main() {
    // 1. Declare a normal integer variable
    int number = 42;
    // 2. Declare a pointer to int
    int* ptr;
    // 3. Store the address of 'number' in the pointer
    ptr = &number;

    // 4. Display the value, address, and pointer info
    cout << "Value of number: " << number << endl;
    cout << "Address of number (&number): " << &number << endl;
    cout << "Value stored in pointer (ptr): " << ptr << endl;
    cout << "Value pointed to by pointer (*ptr): " << *ptr << endl;

    // 5. Change value of 'number' using the pointer
    *ptr = 100;
    cout << "\nAfter modifying via pointer:" << endl;
    cout << "Value of number: " << number << endl;
    cout << "Value pointed to by pointer (*ptr): " << *ptr << endl;

    // 6. Demonstration of a pointer to a pointer
    int** ptr2 = &ptr;
    cout << "\nPointer to pointer example:" << endl;
    cout << "Address of ptr (&ptr): " << &ptr << endl;
    cout << "Value stored in ptr2 (address of ptr): " << ptr2 << endl;
    cout << "Value pointed to by ptr2 (*ptr2, i.e., ptr): " << *ptr2 << endl;
    cout << "Value pointed to by *ptr2 (**ptr2, i.e., number): " << **ptr2 << endl;

    return 0;
}
