#include <iostream>
using namespace std;

class Swapper {
public:
    // Method to swap two numbers
    void swap(int& a, int& b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
};

int main() {
    int a = 5, b = 10;
    Swapper swapper; // Create an object of the Swapper class

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    swapper.swap(a, b); // Call the swap method using the object

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
