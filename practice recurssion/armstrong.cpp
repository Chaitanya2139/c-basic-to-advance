#include <iostream>
#include <cmath>
using namespace std;

class ArmstrongChecker {
public:
    // Recursive method to calculate the sum of digits raised to the power of n
    int calculateArmstrong(int num, int power) {
        if (num == 0) {
            return 0; // Base case: no more digits left
        }
        int digit = num % 10;
        return pow(digit, power) + calculateArmstrong(num / 10, power); // Recursive call
    }

    // Method to check if a number is an Armstrong number
    bool isArmstrong(int num) {
        int digits = countDigits(num);
        return num == calculateArmstrong(num, digits);
    }

private:
    // Helper method to count the number of digits
    int countDigits(int num) {
        if (num == 0) {
            return 0; // Base case
        }
        return 1 + countDigits(num / 10); // Recursive call
    }
};

int main() {
    ArmstrongChecker checker;
    int num;

    cout << "Enter a number to check if it's an Armstrong number: ";
    cin >> num;

    if (checker.isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
