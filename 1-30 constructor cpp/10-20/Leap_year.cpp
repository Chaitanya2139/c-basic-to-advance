#include <iostream>
using namespace std;

class LeapYearChecker {
private:
    int year; // Variable to store the year

public:
    // Constructor to initialize the year and check leap year
    LeapYearChecker() {
        cout << "Enter a year: ";
        cin >> year; // Taking input from the user
        checkLeapYear(); // Call method to check if the year is a leap year
    }

    // Method to check if the year is a leap year
    void checkLeapYear() {
        // Check if the year is a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " is a leap year." << endl;
        } else {
            cout << year << " is not a leap year." << endl;
        }
    }

    // Destructor to print a message when the object is destroyed
    ~LeapYearChecker() {
        cout << "Leap year check completed." << endl;
    }
};

int main() {
    // Create an object of LeapYearChecker, which will automatically take input and check leap year
    LeapYearChecker checker;

    // Destructor will be called automatically when the object goes out of scope
    return 0;
}
