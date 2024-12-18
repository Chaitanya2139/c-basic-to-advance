#include <iostream>
using namespace std;

void callbypointer(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() {
    int x, y; 
    cout << "Enter the numbers you want to swap: ";
    cin >> x >> y;

    callbypointer(&x, &y); // Call the function to swap values using pointers

    cout << "After swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
