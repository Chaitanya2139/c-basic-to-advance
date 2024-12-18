#include <iostream>

using namespace std;

class DisplayClass {
public:
    // Member function to return the value
    int display() {
        int x = 10;
        return x;
    }
};

int main() {
    // Create an object of DisplayClass
    DisplayClass obj;
    
    // Call the display function using the object
    cout << obj.display();  // Calling member function through the object
    
    return 0;
}
