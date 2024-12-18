#include <iostream>
using namespace std;

class NumberSwapper {
public:
    int num1, num2;
    NumberSwapper(int a, int b) {
        num1 = a;
        num2 = b;
    }
    void swapNumbers() {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    void displayNumbers() {
        cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    }
};

int main() {
    try {
        int num1, num2;
        cout << "Enter the first number: ";
        cin >> num1;
        if (cin.fail()) {
            throw runtime_error("Invalid input. Please enter an integer for the first number.");
        }

        cout << "Enter the second number: ";
        cin >> num2;
        if (cin.fail()) {
            throw runtime_error("Invalid input. Please enter an integer for the second number.");
        }
        NumberSwapper swapper(num1, num2);
        cout << "Before swapping: ";
        swapper.displayNumbers();
        swapper.swapNumbers();
        cout << "After swapping: ";
        swapper.displayNumbers();
    } 
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
