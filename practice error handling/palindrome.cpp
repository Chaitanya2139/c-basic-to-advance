#include <iostream>
#include <string>
using namespace std;

class PalindromeChecker {
public:
    void checkPalindrome() {
        try {
            string input;
            cout << "Enter a word: ";
            cin >> input;
            if (input.empty()) {
                throw runtime_error("Input cannot be empty.");
            }
            string reversed = string(input.rbegin(), input.rend());
            if (input == reversed) {
                cout << input << " is a palindrome." << endl;
            } else {
                cout << input << " is not a palindrome." << endl;
            }
        } catch (const runtime_error& e) {
            cout << "Error: " << e.what() << endl;
        }
    }
};

int main() {
    PalindromeChecker checker;
    checker.checkPalindrome();

    return 0;
}
