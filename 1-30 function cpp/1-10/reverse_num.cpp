#include <iostream>
using namespace std;
void reversenum(int& num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    num = reversedNum;
}
int main() {
    int number = 12345;
    cout << "Original number: " << number << endl;
    reversenum(number);
    cout << "Reversed number: " << number << endl;
    return 0;
}