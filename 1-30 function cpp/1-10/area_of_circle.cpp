#include <iostream>
using namespace std;
void calculateArea(float radius) {
    float area = 3.14159 * radius * radius;
    cout << "area of the circle is: " << area << endl;
}
int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    calculateArea(radius);
    
    return 0;
}