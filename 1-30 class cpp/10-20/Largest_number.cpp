#include <iostream>
using namespace std;

class LargestNumberFinder {
public:
    // Method to find and display the largest of three numbers
    void findLargest() {
        int num1, num2, num3;

        // Taking input from the user
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter the third number: ";
        cin >> num3;

        // Finding the largest number
        if (num1 >= num2 && num1 >= num3) {
            cout << "The largest number is: " << num1 << endl;
        } else if (num2 >= num1 && num2 >= num3) {
            cout << "The largest number is: " << num2 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    }
};

int main() {
    // Create an object of LargestNumberFinder
    LargestNumberFinder finder;

    // Call the findLargest method
    finder.findLargest();

    return 0;
}
