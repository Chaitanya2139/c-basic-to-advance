/*1. Write a program that defines a class Rectangle with the following:
Two private data members: length and width.
A default constructor that initializes length and width to 1.
A member function area() to calculate and return the area of the rectangle.
A main() function to create an object of the Rectangle class, call the area()
function, and print the result.*/


#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() {
        length = 1;
        width = 1;
    }

    double area() {
        return length * width;
    }

    void setDimensions(double l, double w) {
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        } else {
            cout << "Length and width must be positive values!" << endl;
        }
    }
};

int main() {
    Rectangle rect;

    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    rect.setDimensions(length, width);

    cout << "The area of the rectangle is: " << rect.area() << endl;

    return 0;
}

