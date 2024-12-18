#include <iostream>
using namespace std;

class TempConvert {
public:
    // Constructor
    TempConvert() {
        cout << "Temperature Conversion Object Created!" << endl;
    }

    // Method to convert Celsius to Fahrenheit
    void celciusToFahrenheit(double celsius) {
        double fahrenheit = (celsius * 9 / 5) + 32;
        cout << celsius << " degrees Celsius is equal to " 
             << fahrenheit << " degrees Fahrenheit." << endl;
    }

    // Destructor
    ~TempConvert() {
        cout << "Temperature Conversion Object Destroyed!" << endl;
    }
};

int main() {
    double celsius;
    TempConvert converter; // Create an object of the TempConvert class

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    converter.celciusToFahrenheit(celsius); // Call the conversion method

    // Destructor will be automatically called when the object goes out of scope
    return 0;
}
