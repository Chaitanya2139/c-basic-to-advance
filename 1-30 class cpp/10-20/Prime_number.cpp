#include <iostream>
using namespace std;

class PrimeChecker {
public:
    // Method to check if a number is prime
    void isPrime() {
        int num;
        bool isPrime = true;

        cout << "Enter Number: ";
        cin >> num;

        // A number less than 2 is not prime
        if (num < 2) {
            cout << num << " is NOT a prime number." << endl;
            return;
        }

        // Check divisors from 2 to the square root of the number
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        // Display result
        if (isPrime) {
            cout << num << " is a prime number!" << endl;
        } else {
            cout << num << " is NOT a prime number!" << endl;
        }
    }
};

int main() {
    // Create an object of PrimeChecker
    PrimeChecker checker;

    // Call the isPrime method
    checker.isPrime();

    return 0;
}
