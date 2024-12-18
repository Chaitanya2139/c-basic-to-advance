/* //6.A program that uses if and else statements to find the largest of three numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter your number a: ";
    cin>> a;
    cout<<"Enter your number b: ";
    cin>> b;
    cout<<"Enter your number c: ";
    cin>> c;
    if (a>b&&c){
        cout<<"The number "<< a << " is greater";
    }
    else if (b>a&&c){
        cout<<"The number "<< b << " is greater";
    }
    else if (c>a&&b){
        cout<<"The number "<< c << " is greater";
    }
    else{
        cout<<"It's and error";
    } */


    
    // return 0;
    
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter your number a: ";
    cin >> a;
    cout << "Enter your number b: ";
    cin >> b;
    cout << "Enter your number c: ";
    cin >> c;

    if (a > b && a > c) {
        cout << "The number " << a << " is greater";
    } else if (b > a && b > c) {
        cout << "The number " << b << " is greater";
    } else if (c > a && c > b) {
        cout << "The number " << c << " is greater";
    } else {
        cout << "Two or more numbers are equal or invalid input";
    }

    return 0;
}
