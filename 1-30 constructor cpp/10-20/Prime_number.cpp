#include <iostream>
using namespace std;

class PrimeChecker {
private:
    int num; // Variable to store the number

public:
    // Constructor to initialize the number and check if it is prime
    PrimeChecker() {
        cout << "Enter Number: ";
        cin >> num;  // Taking input from the user
        isPrime();  // Call the method to check if the number is prime
    }

    // Method to check if the number is prime
    void isPrime() {
        bool isPrime = true;

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

    // Destructor to print a message when the object is destroyed
    ~PrimeChecker() {
        cout << "Prime number check completed." << endl;
    }
};

int main() {
    // Create an object of PrimeChecker, which will automatically take input and check if the number is prime
    PrimeChecker checker;

    // Destructor will be called automatically when the object goes out of scope
    return 0;
}
