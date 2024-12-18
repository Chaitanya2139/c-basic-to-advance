#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, ogNumber, remainder, result = 0;

    cout << "Enter a number: ";
    cin >> number;

    ogNumber = number;

    // Calculate the sum of cubes of each digit
    while (number != 0) {
        remainder = number % 10;           // Extract the last digit
        result += remainder * remainder * remainder; // Cube the digit and add to result
        number /= 10;                      // Remove the last digit
    }

    // Check if the result matches the original number
    if (result == ogNumber) {
        cout << ogNumber << " is an Armstrong number." << endl;
    } else {
        cout << ogNumber << " is not an Armstrong number." << endl;
    }

    return 0;
}
