#include <iostream>
using namespace std;

class FactorialCalculator {
public:
    // Recursive method to calculate factorial
    int factorial(int n) {
        if (n <= 1) {
            return 1; // Base case: factorial of 0 or 1 is 1
        } else {
            return n * factorial(n - 1); // Recursive call
        }
    }
};

int main() {
    FactorialCalculator calculator; // Create an object of the class
    int num;

    cout << "Enter a number to find its factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial of negative numbers is not defined." << endl;
    } else {
        int result = calculator.factorial(num); // Call the factorial method
        cout << "Factorial of " << num << " is: " << result << endl; // Output the result
    }

    return 0;
}
