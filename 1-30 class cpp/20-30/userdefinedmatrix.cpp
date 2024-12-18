#include <iostream>
using namespace std;

class DisplayValue {
private:
    int a;  // Private member variable to store the value

public:
    // Function to input the value
    void inputValue() {
        cout << "Enter the value: ";
        cin >> a;  // Taking input from the user
    }

    // Function to display the value
    void display() {
        cout << "Value of a: " << a << endl;  // Display the value of 'a'
    }
};

int main() {
    DisplayValue obj;  // Create an object of the DisplayValue class

    obj.inputValue();  // Call the input function to get user input
    obj.display();     // Call the display function to show the value

    return 0;
}
