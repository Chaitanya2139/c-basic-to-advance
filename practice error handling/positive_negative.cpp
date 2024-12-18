#include <iostream>
#include <stdexcept> 
using namespace std;

class NumberChecker {
public:
    void checkPositiveNegative() {
        try {
            int num;
            cout << "Enter Number: ";
            cin >> num;

            if (cin.fail()) {
                throw runtime_error("Invalid input. Please enter a valid integer.");
            }

            if (num < 0) {
                cout << "Negative" << endl;
            } else {
                cout << "Positive" << endl;
            }
        } 
        catch (const runtime_error& e) {
            cout << "Error: " << e.what() << endl;
        }
    }
};

int main() {

    NumberChecker checker;

    checker.checkPositiveNegative();

    return 0;
}
