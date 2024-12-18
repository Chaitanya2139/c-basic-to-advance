#include <iostream>
using namespace std;

class NumberReverser {
private:
    int num; // Variable to store the number

public:
    // Constructor to initialize the number and reverse it
    NumberReverser() {
        cout << "Enter Number: ";
        cin >> num; // Taking input from the user
        reverseNumber(); // Call the method to reverse the number
    }

    // Method to reverse the number
    void reverseNumber() {
        int reverse = 0, remainder = 0;

        // Loop to reverse the number
        while (num != 0) {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num /= 10;
        }

        cout << "Reversed Number = " << reverse << endl;
    }

    // Destructor to print a message when the object is destroyed
    ~NumberReverser() {
        cout << "Number reversal completed." << endl;
    }
};

int main() {
    // Create an object of NumberReverser, which will automatically take input and reverse the number
    NumberReverser reverser;

    // Destructor will be called automatically when the object goes out of scope
    return 0;
}
