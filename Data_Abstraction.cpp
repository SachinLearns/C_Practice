#include <iostream>
using namespace std;

// Class providing an abstract view of a bank account
class BankAccount {
private:
    double balance; // internal data (hidden from outside)

public:
    // Constructor
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }

    // Public method to display balance
    void displayBalance() {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account(100.0); // Create account with $100
    account.deposit(50.0);      // Deposit $50
    account.withdraw(30.0);     // Withdraw $30
    account.displayBalance();   // Show remaining balance

    return 0;
}
