#include <iostream>
using namespace std;

class Swapper {
public:
    // Constructor
    Swapper() {
        cout << "Swapper object created!" << endl;
    }

    // Method to swap two numbers
    void swap(int& a, int& b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    // Destructor
    ~Swapper() {
        cout << "Swapper object destroyed!" << endl;
    }
};

int main() {
    int a = 5, b = 10;
    Swapper swapper; // Create an object of the Swapper class (calls constructor)

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    swapper.swap(a, b); // Call the swap method using the object

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    // Destructor will be automatically called when the object goes out of scope
    return 0;
}
