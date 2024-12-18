#include<iostream>
#include<string>
using namespace std;
int main() {
    string str1 = "Hello World!";
    string str2 = "C++ programming is fun. ";
    string str3;

    // length
    // cout<<"Length of str1: "<<str1.length();

    // Assignment
    str3 = str1;
    cout<<"After assignment: str3="<<str3<<endl;

    // Concatenation
    // string str4 = str1 + "How are you?";
    // cout<<"After concatenation: str4="<<str4;

    // Comparison
    if(str1==str3){
        cout<<"str1 and str2 and equal. ";
    }

   return 0; 
}