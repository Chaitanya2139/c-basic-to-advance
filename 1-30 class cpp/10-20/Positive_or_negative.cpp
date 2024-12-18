#include <iostream>
using namespace std;

class NumberChecker {
public:
    // Method to check if a number is positive or negative
    void checkPositiveNegative() {
        int num;
        cout << "Enter Number: ";
        cin >> num;

        if (num < 0) {
            cout << "Negative" << endl;
        } else {
            cout << "Positive" << endl;
        }
    }
};

int main() {
    // Create an object of NumberChecker
    NumberChecker checker;

    // Call the checkPositiveNegative method
    checker.checkPositiveNegative();

    return 0;
}
