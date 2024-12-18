#include <iostream>
using namespace std;

int main() {
    try {
        int a, b;
        cout << "Enter the numerator: ";
        cin >> a;
        cout << "Enter the denominator: ";
        cin >> b;
        if (b == 0) {
            throw 404;
        }
        int c = a / b;
        cout << "The result of division is: " << c << endl;
    } 
    catch (int num) {
        cout << "Cannot divide by 0!" << endl;
        cout << "Error Number: " << num << endl;
    }

    return 0;
}
