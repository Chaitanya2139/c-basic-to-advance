#include <iostream>
using namespace std;

// Function to input and display a 1D array
void createAndDisplayArray() {
    int arr[5]; // Declare a 1D array with 5 elements

    // Input values into the array
    cout << "Enter 5 elements for the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display the array
    cout << "The array is: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    createAndDisplayArray(); // Call the user-defined function
    return 0;
}