#include <iostream>
using namespace std;

class SimpleInterestCalculator {
private:
    float principal, time, rate;

public:
    // Constructor to initialize principal, time, and rate
    SimpleInterestCalculator() {
        cout << "Enter Value of Principal: ";
        cin >> principal;

        cout << "Enter Time Period (in years): ";
        cin >> time;

        cout << "Enter Rate of Interest (%): ";
        cin >> rate;

        // Call the method to calculate simple interest
        calculateSimpleInterest();
    }

    // Method to calculate and display simple interest
    void calculateSimpleInterest() {
        float interest = principal * time * (rate / 100); // Simple Interest formula
        cout << "Your Simple Interest is: " << interest << endl;
    }

    // Destructor to indicate the calculation is complete
    ~SimpleInterestCalculator() {
        cout << "Simple interest calculation completed." << endl;
    }
};

int main() {
    // Create an object of SimpleInterestCalculator, which will automatically take input and calculate interest
    SimpleInterestCalculator calculator;

    // Destructor will be called automatically when the object goes out of scope
    return 0;
}
