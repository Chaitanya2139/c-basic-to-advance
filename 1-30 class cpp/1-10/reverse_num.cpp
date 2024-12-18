#include <iostream>
using namespace std;

class NumberReverser {
public:
    // Method to reverse a number
    void reverse(int& num) {
        int reversedNum = 0;
        while (num != 0) {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num /= 10;
        }
        num = reversedNum; // Update the original number with the reversed value
    }
};

int main() {
    int number = 12345;
    NumberReverser reverser; // Create an object of the NumberReverser class

    cout << "Original number: " << number << endl;
    reverser.reverse(number); // Call the reverse method using the object
    cout << "Reversed number: " << number << endl;

    return 0;
}
