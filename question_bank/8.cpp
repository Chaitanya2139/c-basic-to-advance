/*8. Write a program to reverse the elements of an array. For example, if the array is
{1, 2, 3, 4, 5}, the reversed array should be {5, 4, 3, 2, 1}*/

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; 
    int numbers[SIZE];
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    for (int i = 0; i < SIZE / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[SIZE - 1 - i];
        numbers[SIZE - 1 - i] = temp;
    }
    cout << "\nThe reversed array is:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
