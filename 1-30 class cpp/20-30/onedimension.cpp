#include <iostream>
using namespace std;

class ArrayHandler {
private:
    int arr[5]; // Declare a 1D array with 5 elements

public:
    // Function to input values into the array
    void createArray() {
        cout << "Enter 5 elements for the array:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    // Function to display the array
    void displayArray() {
        cout << "The array is: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ArrayHandler arrayObj;  // Create an object of the ArrayHandler class

    arrayObj.createArray();  // Call the method to input values into the array
    arrayObj.displayArray(); // Call the method to display the array

    return 0;
}
