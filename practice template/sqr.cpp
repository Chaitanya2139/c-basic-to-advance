#include <iostream>
using namespace std;

template <class T>
class Square {
public:
    T num;
    Square(T n) : num(n) {}
    T calculateSquare() {
        return num * num;
    }
};

int main() {
    Square<int> intSquare(5);
    Square<double> doubleSquare(3.5);

    cout << "Square of integer 5: " << intSquare.calculateSquare() << endl;
    cout << "Square of double 3.5: " << doubleSquare.calculateSquare() << endl;

    return 0;
}
