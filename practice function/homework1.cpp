//wap display string value from user defined function and return type
#include<iostream>
using namespace std;
int display(string a);

int main() {
    string x;
    cout<<"Enter the value for x: ";
    cin>>x;
    // int x=10;
    display(x);

   return 0; 
}

int display(string a){
    cout<<"value of a is: "<<a;
    
}