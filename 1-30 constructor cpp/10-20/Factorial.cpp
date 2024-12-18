#include <iostream>
using namespace std;

class FactorialCalculator {
private:
    int num; // Variable to store the number

public:
    // Constructor to initialize the number
    FactorialCalculator(int n) : num(n) {
        // Call the method to calculate factorial
        calculateFactorial();
    }

    // Method to calculate factorial
    void calculateFactorial() {
        int res = 1; // Initialize result to 1
        for (int i = 1; i <= num; i++) {
            res *= i; // Calculate factorial
        }
        cout << num << "!" << " = " << res << endl;
    }

    // Destructor to print a message when the object is destroyed
    ~FactorialCalculator() {
        cout << "Factorial calculation is complete." << endl;
    }
};

int main() {
    int number;
    // Ask the user for the number
    cout << "Enter a number: ";
    cin >> number;

    // Create an object of FactorialCalculator with the user input
    FactorialCalculator factorialObj(number);

    // Destructor will be called automatically at the end of the main function
    return 0;
}
