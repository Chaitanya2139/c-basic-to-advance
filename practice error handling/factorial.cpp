#include <iostream>

using namespace std;

int factorial() {
    try {
        int num; 
        cout << "Enter Number: "; 
        cin >> num; 
        

        if (cin.fail()) {
            throw runtime_error("Invalid input. Please enter an integer.");
        }
        if (num < 0) {
            throw runtime_error("Factorial is not defined for negative numbers.");
        }

        int res = 1; 
        for (int i = 1; i <= num; i++) {
            res *= i; 
        }

        cout << num << "!" << " = " << res << endl;
    } 
    catch (const runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}

int main() {
    factorial();
    return 0;
}
