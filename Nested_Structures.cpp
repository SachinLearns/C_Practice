#include <iostream>
#include <string>
using namespace std;

// Inner structure
struct Date {
    int day;
    int month;
    int year;

    void printDate() {
        cout << day << "/" << month << "/" << year;
    }
};

// Outer structure containing the inner one
struct Person {
    string name;
    Date dob; // nested structure member

    void introduce() {
        cout << "Hi, my name is " << name << ". I was born on ";
        dob.printDate();
        cout << "." << endl;
    }
};

int main() {
    // Initialize using aggregate initialization
    Person p1 = {"Alice", {15, 8, 1995}};

    // Access members of nested struct directly
    cout << "Accessing directly: " 
         << p1.dob.day << "-" << p1.dob.month << "-" << p1.dob.year << endl;

    // Use struct's member function
    p1.introduce();

    return 0;
}
