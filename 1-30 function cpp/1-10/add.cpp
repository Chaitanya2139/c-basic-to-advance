#include <iostream>
using namespace std;

void add(int num1, int num2) {
    int result = num1 + num2;
    cout << "The sum is: " << result << endl;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    add(num1, num2);
    
    return 0;
}