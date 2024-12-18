#include <iostream>
using namespace std;

class Multiplier {
public:
    // Method to multiply two numbers
    void multiply(int a, int b) {
        int result = a * b;
        cout << "Product is: " << result << endl;
    }
};

int main() {
    int num1, num2;
    Multiplier multiplier; // Create an object of the Multiplier class

    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;

    multiplier.multiply(num1, num2); // Call the method using the object

    return 0;
}
