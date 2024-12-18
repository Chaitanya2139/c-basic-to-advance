#include <iostream>
using namespace std;

class NumberChecker {
public:
    // Method to check if a number is odd or even
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
    NumberChecker checker; // Create an object of the NumberChecker class

    cout << "Enter a number: ";
    cin >> number;

    checker.checkOddEven(number); // Call the method using the object

    return 0;
}
