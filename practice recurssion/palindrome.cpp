#include <iostream>
#include <string>
using namespace std;

class PalindromeChecker {
public:
    // Recursive method to check if a string is a palindrome
    bool isPalindrome(const string &str, int start, int end) {
        if (start >= end) {
            return true; // Base case: if pointers cross or meet, it's a palindrome
        }
        if (str[start] != str[end]) {
            return false; // If characters at current positions are not equal, not a palindrome
        }
        return isPalindrome(str, start + 1, end - 1); // Recursive call with updated indices
    }
};

int main() {
    PalindromeChecker checker; // Create an object of the class
    string input;

    cout << "Enter a string to check if it's a palindrome: ";
    cin >> input;

    bool result = checker.isPalindrome(input, 0, input.length() - 1); // Call the recursive method

    if (result) {
        cout << "The string \"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "The string \"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}
