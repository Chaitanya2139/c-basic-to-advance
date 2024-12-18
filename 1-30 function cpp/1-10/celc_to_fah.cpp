#include <iostream>
using namespace std;
void celctofah(double celsius) {
    double fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;
}
int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    celctofah(celsius);
    return 0;
}