#include <iostream>
using namespace std;

// User-defined function to check if a number is even or odd
void checkEvenOdd(int a) {
    if (a % 2 == 0) {
        cout << "Your number is even" << endl;
    } else {
        cout << "Your number is odd" << endl;
    }
}

int main() {
    int a;
    cout << "Enter your number: ";
    cin >> a;

    // Call the user-defined function
    checkEvenOdd(a);

    return 0;
}
