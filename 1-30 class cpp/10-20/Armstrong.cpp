#include <iostream>
#include <cmath> // For the pow function
using namespace std;

class ArmstrongChecker {
private:
    int num;

public:
    // Constructor to initialize the number
    ArmstrongChecker(int n) : num(n) {}

    // Method to check if the number is an Armstrong number
    bool isArmstrong() {
        int vnum = num, temp = num, count = 0, result = 0, remainder;

        // Calculate the number of digits
        while (temp != 0) {
            count++;
            temp /= 10;
        }

        // Calculate the sum of digits raised to the power of the count
        while (vnum != 0) {
            remainder = vnum % 10;
            result += pow(remainder, count);
            vnum /= 10;
        }

        // Check if the number is an Armstrong number
        return num == result;
    }

    // Method to display the result
    void displayResult() {
        if (isArmstrong()) {
            cout << "Yes, the number " << num << " is an Armstrong number." << endl;
        } else {
            cout << "No, the number " << num << " is not an Armstrong number." << endl;
        }
    }
};

int main() {
    int number;

    // Input the number
    cout << "Enter the number: ";
    cin >> number;

    // Create an object of ArmstrongChecker
    ArmstrongChecker checker(number);

    // Display the result
    checker.displayResult();

    return 0;
}
