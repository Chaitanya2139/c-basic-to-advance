/*4. Write a program to demonstrate function overloading by creating three functions
named max:
int max(int a, int b) to find the larger of two integers.
double max(double a, double b) to find the larger of two double values.*/

#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "The larger integer is: " << max(int1, int2) << endl;

    double double1, double2;
    cout << "Enter two double values: ";
    cin >> double1 >> double2;
    cout << "The larger double value is: " << max(double1, double2) << endl;

    char char1, char2;
    cout << "Enter two characters: ";
    cin >> char1 >> char2;
    cout << "The larger character (by ASCII value) is: " << max(char1, char2) << endl;

    return 0;
}
