#include <iostream>
using namespace std;
void multiply(int a, int b) {
    int result = a * b;
    cout << "product is: " << result << endl;
}
int main() {
    int num1, num2;
    cout << "first number: ";
    cin >> num1;
    cout << "second number: ";
    cin >> num2;
    multiply(num1, num2);
    return 0;
}
