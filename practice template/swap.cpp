#include <iostream>
using namespace std;
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    double p = 1.5, q = 3.7;
    cout << "\nBefore swapping: p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swapping: p = " << p << ", q = " << q << endl;

    char a = 'A', b = 'B';
    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
