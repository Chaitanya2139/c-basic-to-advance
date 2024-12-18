#include <iostream>
using namespace std;

class NumberReverser {
public:
    // Method to reverse a number
    void reverseNumber() {
        int num, reverse = 0, remainder = 0;

        cout << "Enter Number: ";
        cin >> num;

        // Loop to reverse the number
        while (num != 0) {
            remainder = num % 10;
            reverse = reverse * 10 + remainder;
            num /= 10;
        }

        cout << "Reversed Number = " << reverse << endl;
    }
};

int main() {
    // Create an object of NumberReverser
    NumberReverser reverser;

    // Call the reverseNumber method
    reverser.reverseNumber();

    return 0;
}
