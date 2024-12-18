/*12. Explain how swapping works using pointers.
Modify above Program to find both the largest and smallest elements.
Explain why *(ptr + i) is used to access array elements in Program 3.
Write a program to calculate the product of two numbers using pointers.
Add a feature to the above Program to calculate the sum of all array
elements using pointer arithmetic.*/

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int numbers[SIZE];
    int *ptr = numbers; 
    cout << "Enter 6 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> *(ptr + i); 
    int largest = *ptr, smallest = *ptr;
    for (int i = 1; i < SIZE; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }
    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;
    }
    return 0;
}
