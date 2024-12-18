#include<iostream>
using namespace std;

class NumberSwapper {
public:
    int num1, num2;

    // Constructor to initialize num1 and num2
    NumberSwapper(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Method to swap the numbers
    void swapNumbers() {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Method to display the numbers
    void displayNumbers() {
        cout << "num1=" << num1 << ", num2=" << num2 << endl;
    }
};

int main() {
    // Create an object of NumberSwapper with initial values
    NumberSwapper swapper(10, 20);

    // Display numbers before swapping
    cout << "Before swapping: ";
    swapper.displayNumbers();

    // Swap the numbers
    swapper.swapNumbers();

    // Display numbers after swapping
    cout << "After swapping: ";
    swapper.displayNumbers();

    return 0;
}
