#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize a string
    string str = "Hello, OpenAI!";
    
    // 1. Length of the string
    size_t length = str.length();
    cout << "1. Length of the string: " << length << std::endl;

    // 2. Convert to uppercase (manual approach since C++ string class doesn't have a direct function)
    string upperStr = str;
    for (char &c : upperStr) {
        c = toupper(c);
    }
    std::cout << "2. String in uppercase: " << upperStr << std::endl;

    // 3. Replace a substring
    string replacedStr = str;
    size_t pos = replacedStr.find("OpenAI");
    if (pos != std::string::npos) {
        replacedStr.replace(pos, 6, "World");
    }
    cout << "3. After replacing 'OpenAI' with 'World': " << replacedStr << std::endl;

    // 4. Extract a substring
    string substring = str.substr(7, 6); // Extract "OpenAI"
    cout << "4. Extracted substring: " << substring <<  endl;

    // 5. Check if string contains a specific word
    bool contains = (str.find("OpenAI") !=  string::npos);
    cout << "5. Does the string contain 'OpenAI'? " << (contains ? "Yes" : "No") << endl;

    return 0;
}
