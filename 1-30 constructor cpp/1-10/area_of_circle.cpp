#include <iostream>
using namespace std;

class Circle {
private:
    float radius;  // Member variable to store the radius

public:
    // Constructor to initialize the radius and calculate the area
    Circle(float r) {
        radius = r;  // Initialize the radius with the given value
        cout << "The radius of the circle is: " << radius << endl;
        calculateArea();  // Call the method to calculate the area
    }

    // Method to calculate the area of the circle
    void calculateArea() {
        float area = 3.14159 * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }

    // Destructor to handle cleanup
    ~Circle() {
        cout << "Destructor called for the circle object." << endl;
    }
};

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Creating an object of Circle, which will call the constructor
    Circle circle(radius);

    // Destructor is automatically called at the end of the main function when the object goes out of scope
    return 0;
}
