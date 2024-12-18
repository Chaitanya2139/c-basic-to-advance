#include <iostream>
using namespace std;

class Circle {
public:
    // Method to calculate the area of the circle
    void calculateArea(float radius) {
        float area = 3.14159 * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }
};

int main() {
    float radius;
    Circle circle; // Create an object of the Circle class

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    circle.calculateArea(radius); // Call the method using the object

    return 0;
}
