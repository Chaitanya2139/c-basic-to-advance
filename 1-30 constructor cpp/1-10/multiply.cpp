#include <iostream>
using namespace std;

class Multiplier {
public:
    // Constructor
    Multiplier() {
        cout << "Multiplier object created!" << endl;
    }

    // Method to multiply two numbers
    void multiply(int a, int b) {
        int result = a * b;
        cout << "Product is: " << result << endl;
    }

    // Destructor
    ~Multiplier() {
        cout << "Multiplier object destroyed!" << endl;
    }
};

int main() {
    int num1, num2;
    Multiplier multiplier; // Create an object of the Multiplier class (calls constructor)

    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;

    multiplier.multiply(num1, num2); // Call the multiply method using the object

    // Destructor will be automatically called when the object goes out of scope
    return 0;
}
