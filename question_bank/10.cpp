/*10.Write a program to input 8 numbers into an array and count how many of them are
even and how many are odd.*/
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8; 
    int numbers[SIZE];
    int evenCount = 0, oddCount = 0; 
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "\nNumber of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
}
