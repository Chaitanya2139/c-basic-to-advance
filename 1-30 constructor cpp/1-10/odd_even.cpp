#include <iostream>
using namespace std;

class NumberChecker {
public:
    // Constructor
    NumberChecker() {
        cout << "NumberChecker object created!" << endl;
    }

    // Method to check if a number is odd or even
    void checkOddEven(int num) {
        if (num % 2 != 0) {
            cout << num << " is odd." << endl;
        } else {
            cout << num << " is even." << endl;
        }
    }

    // Destructor
    ~NumberChecker() {
        cout << "NumberChecker object destroyed!" << endl;
    }
};

int main() {
    int number;
    NumberChecker checker; // Create an object of the NumberChecker class (calls constructor)

    cout << "Enter a number: ";
    cin >> number;

    checker.checkOddEven(number); // Call the method using the object

    // Destructor will be automatically called when the object goes out of scope
    return 0;
}
