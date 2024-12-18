/*11. Create a program in C++ based on Strings
a. Reverse of string
b. Concatenate two strings
c. String Length calculation*/

#include <iostream>
#include <string>
using namespace std;
string reverseString(const string &str) {
    string reversed = str;
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        swap(reversed[i], reversed[len - 1 - i]);
    }
    return reversed;
}
string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2;
}
int stringLength(const string &str) {
    return str.length();
}

int main() {
    string str1, str2;
    cout << "Enter a string to reverse: ";
    cin >> str1;
    cout << "Reversed string: " << reverseString(str1) << endl;
    cout << "\nEnter the first string for concatenation: ";
    cin >> str1;
    cout << "Enter the second string for concatenation: ";
    cin >> str2;
    cout << "Concatenated string: " << concatenateStrings(str1, str2) << endl;
    cout << "\nEnter a string to calculate its length: ";
    cin >> str1;
    cout << "Length of the string: " << stringLength(str1) << endl;

    return 0;
}
