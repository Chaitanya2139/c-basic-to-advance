#include <iostream>
using namespace std;

class Greeter {
public:
    // Constructor
    Greeter() {
        cout << "Greeter object created!" << endl;
    }

    // Method to display "Hello, World!"
    void sayHello() {
        cout << "Hello, World!" << endl;
    }

    // Destructor
    ~Greeter() {
        cout << "Greeter object destroyed!" << endl;
    }
};

int main() {
    Greeter greeter; // Create an object of the Greeter class (calls constructor)
    greeter.sayHello(); // Call the sayHello method using the object
    // Destructor will be automatically called when greeter goes out of scope
    return 0;
}
