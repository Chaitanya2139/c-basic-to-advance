#include <iostream>
using namespace std;

class ArrayHandler {
private:
    int arr[5]; // Declare a 1D array with 5 elements

public:
    // Constructor to initialize the array
    ArrayHandler() {
        // Initializing the array to zeros or any default values
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;  // Set each element to 0 by default
        }
        cout << "Array initialized." << endl;  // Message indicating initialization
    }

    // Destructor to clean up or finalize actions (if needed)
    ~ArrayHandler() {
        cout << "ArrayHandler object is being destroyed." << endl;
    }

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
    ArrayHandler arrayObj;  // Create an object of the ArrayHandler class, which calls the constructor

    arrayObj.createArray();  // Call the method to input values into the array
    arrayObj.displayArray(); // Call the method to display the array

    // Destructor will be called automatically when arrayObj goes out of scope

    return 0;
}
