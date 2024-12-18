#include<iostream>
using namespace std;

class SumCalculator {
public:
    // Recursive method to calculate sum
    int sum(int k) {
        if (k > 0) {
            return k + sum(k - 1); // Recursive call
        } else {
            return 0; // Base case
        }
    }
};

int main() {
    SumCalculator calculator; // Create an object of the class
    int result = calculator.sum(10); // Call the sum method
    cout << "Sum: " << result << endl; // Output the result
    return 0;
}
