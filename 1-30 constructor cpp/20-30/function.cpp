#include <iostream>

using namespace std;

class DisplayClass {
private:
    int x;  // Member variable

public:
    // Constructor to initialize the value of x
    DisplayClass() {
        x = 10;  // Initializing x in the constructor
        cout << "Constructor called. Initializing x to " << x << endl;
    }

    // Destructor
    ~DisplayClass() {
        cout << "Destructor called. Cleaning up..." << endl;
    }

    // Member function to return the value of x
    int display() {
        return x;  // Returning the value of x
    }
};

int main() {
    // Create an object of DisplayClass
    DisplayClass obj;
    
    // Call the display function using the object
    cout << "The value of x is: " << obj.display() << endl;  // Calling member function through the object

    return 0;
}
