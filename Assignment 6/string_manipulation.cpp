#include<iostream>
#include<string>
using namespace std;
int main() {
    string str, reversedStr;

    // Input the string
    cout<<"Enter a string";
    getline(cin, str);

    //reverse the string
    for (int i =str.length() - 1; i>=0; i-- ){
        reversedStr += str[i];
    }

    //Output the reversed string
    cout<<"Reversed string: "<<reversedStr<<endl;
    
   return 0; 
}