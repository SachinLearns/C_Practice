#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Print all elements using a loop
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";  // Access using index
    }
    cout << endl;

    // Modify an element
    numbers[2] = 99;  // Change the third element (index 2)

    // Print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
