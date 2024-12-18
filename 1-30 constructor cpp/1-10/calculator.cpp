#include <iostream>
using namespace std;

class Calculator {
public:
    // Constructor
    Calculator() {
        cout << "Calculator object created!" << endl;
    }

    // Method to perform the calculation
    void calculate() {
        double num1, num2;
        char op;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        double result;
        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                    return;
                }
                break;
            default:
                cout << "Invalid operator!" << endl;
                return;
        }
        cout << "Result: " << result << endl;
    }

    // Destructor
    ~Calculator() {
        cout << "Calculator object destroyed!" << endl;
    }
};

int main() {
    Calculator calc; // Create an object of the Calculator class
    calc.calculate(); // Call the calculate method

    // Destructor will be called automatically when calc goes out of scope
    return 0;
}
