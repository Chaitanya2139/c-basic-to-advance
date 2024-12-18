#include <iostream>
using namespace std;

class NumberChecker {
private:
    int num; // Variable to store the number

public:
    // Constructor to initialize the number and check if it's positive or negative
    NumberChecker() {
        cout << "Enter Number: ";
        cin >> num;  // Taking input from the user
        checkPositiveNegative();  // Call the method to check if the number is positive or negative
    }

    // Method to check if the number is positive or negative
    void checkPositiveNegative() {
        if (num < 0) {
            cout << "Negative" << endl;
        } else {
            cout << "Positive" << endl;
        }
    }

    // Destructor to print a message when the object is destroyed
    ~NumberChecker() {
        cout << "Number check completed." << endl;
    }
};

int main() {
    // Create an object of NumberChecker, which will automatically take input and check positive/negative
    NumberChecker checker;

    // Destructor will be called automatically when the object goes out of scope
    return 0;
}
