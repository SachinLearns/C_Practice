#include <iostream>
using namespace std;

// ===== Function Declaration (also called function prototype) =====
int addNumbers(int a, int b);

int main() {
    int num1 = 5, num2 = 10;

    // ===== Function Call =====
    int result = addNumbers(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

// ===== Function Definition =====
int addNumbers(int a, int b) {
    return a + b;
}