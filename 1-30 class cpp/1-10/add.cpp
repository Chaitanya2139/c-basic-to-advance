#include <iostream>
using namespace std;

class Calculator {
public:
    // Method to add two numbers
    void add(int num1, int num2) {
        int result = num1 + num2;
        cout << "The sum is: " << result << endl;
    }
};

int main() {
    int num1, num2;
    Calculator calc; // Create an object of the Calculator class

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    calc.add(num1, num2); // Call the add method using the object

    return 0;
}
