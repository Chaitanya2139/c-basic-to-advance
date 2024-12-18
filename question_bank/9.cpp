/*9. Write a program to take 6 integers as input, store them in an array, and calculate
the sum of all elements in the array.*/

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6; // Size of the array
    int numbers[SIZE];
    int sum = 0; // Variable to store the sum

    // User input: Populate the array
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i]; // Add the input to the sum
    }

    // Display the sum of the elements
    cout << "\nThe sum of the array elements is: " << sum << endl;

    return 0;
}
