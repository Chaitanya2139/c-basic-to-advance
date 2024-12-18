// W.A.P. to check whether number is prime number or not
#include <iostream>
using namespace std;

int main() {
    int number, flag = 0; // 'flag' to determine if the number is prime
    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
        return 0;
    }

    // Loop from 2 to number - 1
    for (int i = 2; i < number; i++) {
        if (number % i == 0) { // If divisible
            flag = 1; // Not prime
            break;    // Exit the loop early
        }
    }

    if (flag == 0)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}
