#include <iostream>
using namespace std;

// User-defined function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(int C) {
    return (C * 1.8) + 32;
}

int main() {
    int C;
    cout << "Enter the value of C: ";
    cin >> C;

    // Call the user-defined function and display the result
    cout << "The value of F is: " << celsiusToFahrenheit(C) << endl;

    return 0;
}
