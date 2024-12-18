#include <iostream>
using namespace std;

int factorial() {
    int num; // Define variable for input number
    cout << "Enter Number: "; // Ask for a number
    cin >> num; // Save the number

    int res = 1; // Initialize result to 1
    for (int i = 1; i <= num; i++) {
        res *= i; // Calculate factorial
    }

    cout << num << "!" << " = " << res << endl;
    return 0;
}

int main() {
    factorial();
    return 0;
}
