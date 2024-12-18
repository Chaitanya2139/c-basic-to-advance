#include <iostream>
using namespace std;

class SimpleInterestCalculator {
private:
    float principal, time, rate;

public:
    // Method to calculate and display simple interest
    void calculateSimpleInterest() {
        cout << "Enter Value of Principal: ";
        cin >> principal;

        cout << "Enter Time Period (in years): ";
        cin >> time;

        cout << "Enter Rate of Interest (%): ";
        cin >> rate;

        float interest = principal * time * (rate / 100); // Simple Interest formula
        cout << "Your Simple Interest is: " << interest << endl;
    }
};

int main() {
    // Create an object of SimpleInterestCalculator
    SimpleInterestCalculator calculator;

    // Call the method to calculate and display the simple interest
    calculator.calculateSimpleInterest();

    return 0;
}
