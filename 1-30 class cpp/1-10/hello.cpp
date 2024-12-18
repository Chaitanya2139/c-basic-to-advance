#include <iostream>
using namespace std;

class Greeter {
public:
    // Method to display "Hello, World!"
    void sayHello() {
        cout << "Hello, World!" << endl;
    }
};

int main() {
    Greeter greeter; // Create an object of the Greeter class
    greeter.sayHello(); // Call the method using the object
    return 0;
}
