#include <iostream>
using namespace std;

// User-defined function to swap values using multiplication and division
void swapValues(int &x, int &y) {
    x = x * y; // x = x * y
    y = x / y; // y = x / y (original x)
    x = x / y; // x = x / y (original y)
}

int main() {
    int x = 3, y = 2;

    // Call the user-defined function
    swapValues(x, y);

    // Display the swapped values
    cout << "this is x " << x << endl;
    cout << "this is y " << y << endl;

    return 0;
}