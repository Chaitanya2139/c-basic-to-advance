#include <iostream>
using namespace std;

// Call by value
void callbyvalue(int a) {
    int c = a + 10;
    cout << "Value of C (Call by Value): " << c << endl;
}

// Call by reference
void callbyreference(int &a) {
    a += 10;
    cout << "Value of a (Call by Reference): " << a << endl;
}

int main() {
    int x = 10;
    
    // Display initial value of x
    cout << "Initial Value of X: " << x << endl;

    // Testing call by value
    cout << "Testing Call by Value..." << endl;
    callbyvalue(x);
    cout << "Value of X after Call by Value: " << x << endl;  // x remains unchanged

    // Testing call by reference
    cout << "Testing Call by Reference..." << endl;
    callbyreference(x);
    cout << "Value of X after Call by Reference: " << x << endl;  // x is modified

    return 0;
}
