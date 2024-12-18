/*5. Write a recursive function int factorial(int n) that calculates the factorial of a given
number n.
In the main() function, prompt the user to enter a positive integer and call the
factorial function to compute and display the result.
Example: For input 5, the output should be 120.*/

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) 
        return 1;
    else
        return n * factorial(n - 1); 
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
