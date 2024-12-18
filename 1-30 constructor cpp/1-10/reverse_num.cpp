#include <iostream>
using namespace std;

class NumberReverser {
public:
    // Constructor
    NumberReverser() {
        cout << "NumberReverser object created!" << endl;
    }

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

    // Destructor
    ~NumberReverser() {
        cout << "NumberReverser object destroyed!" << endl;
    }
};

int main() {
    int number = 12345;
    NumberReverser reverser; // Create an object of the NumberReverser class (calls constructor)

    cout << "Original number: " << number << endl;
    reverser.reverse(number); // Call the reverse method using the object
    cout << "Reversed number: " << number << endl;

    // Destructor will be automatically called when the object goes out of scope
    return 0;
}
