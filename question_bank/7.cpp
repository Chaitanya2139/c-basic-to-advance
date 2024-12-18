/*7. Write a program to declare an array of size 10, initialize it with the first 10 natural
numbers, and print each element on a new line.*/

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    cout << "\nThe numbers you entered are:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}
