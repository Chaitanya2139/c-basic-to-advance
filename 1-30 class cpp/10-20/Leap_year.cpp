#include <iostream>
using namespace std;

class LeapYearChecker {
public:
    // Method to check if a year is a leap year
    void checkLeapYear() {
        int year;

        // Taking input from the user
        cout << "Enter a year: ";
        cin >> year;

        // Check if the year is a leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " is a leap year." << endl;
        } else {
            cout << year << " is not a leap year." << endl;
        }
    }
};

int main() {
    // Create an object of LeapYearChecker
    LeapYearChecker checker;

    // Call the checkLeapYear method
    checker.checkLeapYear();

    return 0;
}
