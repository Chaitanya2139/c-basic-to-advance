#include <iostream>
using namespace std;

class NumberChecker {
public:
    void checkOddEven(int num) {
        if (num % 2 != 0) {
            cout << num << " is odd." << endl;
        } else {
            cout << num << " is even." << endl;
        }
    }
};

int main() {
    int number;
    NumberChecker checker; 

    try {
        cout << "Enter a number: ";
        cin >> number;
        if (cin.fail()) {
            throw runtime_error("Invalid input. Please enter a valid integer.");
        }

        checker.checkOddEven(number); 
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
