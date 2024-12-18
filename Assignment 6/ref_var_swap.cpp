#include <iostream>
using namespace std;

void callbyref(int &x, int &y) {
    x = x + y;
    y = x - y;
    x = x - y;
}

int main() {
    int x, y; 
    cout << "Enter the numbers you want to swap: ";
    cin >> x >> y;

    callbyref(x, y); // Call the function to swap values

    cout << "After swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
