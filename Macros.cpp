#include <iostream>
using namespace std;

// Object-like macro for tax rate
#define TAX_RATE 0.08  // 8% tax

// Function-like macro to calculate total with tax
#define TOTAL_WITH_TAX(amount) ((amount) + ((amount) * TAX_RATE))

int main() {
    // const-based variable for a fixed discount
    const double DISCOUNT = 5.00;

    double price = 100.0;
    double discountedPrice = price - DISCOUNT;
    double finalPrice = TOTAL_WITH_TAX(discountedPrice);

    cout << "Original price: $" << price << endl;
    cout << "Discount: $" << DISCOUNT << endl;
    cout << "Price after discount: $" << discountedPrice << endl;
    cout << "Tax rate: " << (TAX_RATE * 100) << "%" << endl;
    cout << "Final price (with tax): $" << finalPrice << endl;

    return 0;
}