#include <iostream>
using namespace std;

class TempConvert {
public:
    // Method to convert Celsius to Fahrenheit
    void celciusToFahrenheit(double celsius) {
        double fahrenheit = (celsius * 9 / 5) + 32;
        cout << celsius << " degrees Celsius is equal to " 
             << fahrenheit << " degrees Fahrenheit." << endl;
    }
};

int main() {
    double celsius;
    TempConvert converter; // Create an object of the TempConvert class

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    converter.celciusToFahrenheit(celsius); // Call the conversion method

    return 0;
}
