#include <iostream>
#include <string>
using namespace std;

class StringHandler {
private:
    string userInput;

public:
    // Constructor to initialize the string from user input
    StringHandler() {
        cout << "Enter a string: ";
        getline(cin, userInput);  // Taking user input
    }

    // Method to display the string
    void displayString() {
        cout << "You entered: " << userInput << endl;
    }

    // Destructor to clean up if necessary (in this case, not strictly required)
    ~StringHandler() {
        // Destructor is empty here, but we can use it if we need cleanup
        cout << "Destructor called. Cleaning up..." << endl;
    }
};

int main() {
    // Create an object of StringHandler which will automatically call the constructor
    StringHandler handler;

    // Display the entered string
    handler.displayString();

    // Destructor will be automatically called when 'handler' goes out of scope

    return 0;
}
