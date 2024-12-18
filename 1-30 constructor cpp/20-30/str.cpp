#include <iostream>

using namespace std;

class DisplayValue {
private:
    int a;  // Private member variable to store the value

public:
    // Constructor to initialize the value
    DisplayValue(int x) {
        a = x;  // Assign the value from the constructor parameter
        cout << "Constructor called. Value of a is initialized to: " << a << endl;
    }

    // Destructor to clean up (if needed)
    ~DisplayValue() {
        cout << "Destructor called. Cleaning up..." << endl;
    }

    // Function to display the value
    void display() {
        cout << "Value of a: " << a << endl;  // Display the value of 'a'
    }
};

int main() {
    int x;
    cout << "Enter the value: ";  // Prompting the user to enter a value
    cin >> x;  // Taking input from the user

    DisplayValue obj(x);  // Creating an object and passing value to the constructor
    obj.display();  // Calling the display function to show the value

    // Destructor will be automatically called when the object goes out of scope
    return 0;
}
