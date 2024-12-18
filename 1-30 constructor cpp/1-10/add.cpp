#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2;  // Declare member variables to store the numbers

public:
    // Constructor to initialize the numbers
    Calculator(int n1, int n2) {
        num1 = n1;  // Initialize num1
        num2 = n2;  // Initialize num2
        cout << "Constructor called. Numbers initialized." << endl;
    }

    // Method to add two numbers
    void add() {
        int result = num1 + num2;
        cout << "The sum is: " << result << endl;
    }

    // Destructor to clean up
    ~Calculator() {
        cout << "Destructor called. Cleaning up resources." << endl;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Create an object of the Calculator class, passing values to the constructor
    Calculator calc(num1, num2);

    calc.add(); // Call the add method using the object

    return 0;
}
