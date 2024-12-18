#include<iostream>
using namespace std;

// User-defined function to calculate the perimeter of a rectangle
float calculatePerimeter(float side1, float side2) {
    return (side1 + side2) * 2;
}

int main() {
    float s1, s2;

    cout << "Enter the value of side1: ";
    cin >> s1;
    cout << "Enter the value of side2: ";
    cin >> s2;

    // Call the user-defined function
    cout << "The perimeter of the rectangle is " << calculatePerimeter(s1, s2) << endl;

    return 0;
}