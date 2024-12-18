#include <iostream>
using namespace std;
void isOdd(int num) {
    if (num % 2 != 0) {
        cout << num << " is odd." << endl;
    } else {
        cout << num << " is even." << endl;
    }
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    isOdd(number);

    return 0;
}