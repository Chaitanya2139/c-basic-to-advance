/*6. Write a C++ program to input 5 integers from the user into an array and find the
largest number in the array*/

#include <iostream>
using namespace std;

int main() {
    const int Lenghth = 5;
    int numbers[Lenghth];
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < Lenghth; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    int largest = numbers[0];
    for (int i = 1; i < Lenghth; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    cout << "The largest number is: " << largest << endl;

    return 0;
}
