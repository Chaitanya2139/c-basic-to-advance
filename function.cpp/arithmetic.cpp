#include <iostream>
using namespace std;

// User-defined functions for arithmetic operations
void inputValues(int &a, int &b) {
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
}

void displayValues(int a, int b) {
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
}

void performOperations(int a, int b) {
    cout << "The sum is: " << a + b << endl;
    cout << "The subtraction is: " << a - b << endl;
    cout << "The multiplication is: " << a * b << endl;
    if (b != 0) { // Avoid division by zero
        cout << "The division is: " << a / b << endl;
    } else {
        cout << "Division by zero is not allowed!" << endl;
    }
}

int main() {
    int a, b;

    // Call user-defined functions
    inputValues(a, b);
    displayValues(a, b);
    performOperations(a, b);

    return 0;
}
