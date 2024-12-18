#include <iostream>
using namespace std;

class ValueReference {
private:
    int x;  // Class member variable

public:
    // Constructor to initialize the variable x
    ValueReference(int val) : x(val) {
        cout << "Constructor called. Initial Value of X: " << x << endl;
    }

    // Destructor
    ~ValueReference() {
        cout << "Destructor called. Cleaning up..." << endl;
    }

    // Method to demonstrate Call by Value
    void callbyvalue() {
        int a = x;  // Copy of x
        int c = a + 10;
        cout << "Value of C (Call by Value): " << c << endl;
    }

    // Method to demonstrate Call by Reference
    void callbyreference() {
        x += 10;  // Modify the original x
        cout << "Value of X (Call by Reference): " << x << endl;
    }

    // Method to display the current value of x
    void display() {
        cout << "Current Value of X: " << x << endl;
    }
};

int main() {
    // Create an object of ValueReference class, passing initial value to the constructor
    ValueReference valueObj(10);
    
    // Display initial value of x
    valueObj.display();

    // Testing call by value
    cout << "Testing Call by Value..." << endl;
    valueObj.callbyvalue();
    valueObj.display();  // x remains unchanged

    // Testing call by reference
    cout << "Testing Call by Reference..." << endl;
    valueObj.callbyreference();
    valueObj.display();  // x is modified

    return 0;
}
