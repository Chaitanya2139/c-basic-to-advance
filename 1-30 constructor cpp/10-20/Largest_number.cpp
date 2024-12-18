#include <iostream>
using namespace std;

class LargestNumberFinder {
private:
    int num1, num2, num3; // Variables to store the three numbers

public:
    // Constructor to initialize and find the largest number
    LargestNumberFinder() {
        // Taking input from the user
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter the third number: ";
        cin >> num3;

        // Call the method to find and display the largest number
        findLargest();
    }

    // Method to find and display the largest of three numbers
    void findLargest() {
        // Finding the largest number
        if (num1 >= num2 && num1 >= num3) {
            cout << "The largest number is: " << num1 << endl;
        } else if (num2 >= num1 && num2 >= num3) {
            cout << "The largest number is: " << num2 << endl;
        } else {
            cout << "The largest number is: " << num3 << endl;
        }
    }

    // Destructor to print a message when the object is destroyed
    ~LargestNumberFinder() {
        cout << "Largest number calculation completed." << endl;
    }
};

int main() {
    // Create an object of LargestNumberFinder, which will automatically take input and find the largest number
    LargestNumberFinder finder;

    // Destructor will be called automatically when the object goes out of scope
    return 0;
}
