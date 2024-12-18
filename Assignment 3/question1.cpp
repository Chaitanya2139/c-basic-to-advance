//1.A simple program to check if a number is positive, negative, or zero
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>> a;
    if (a>0){
        cout<<"Your number is positive";
    }
    else if (a==0){
        cout<<"Your number is zero";
    }
    else {
        cout<<"Your number is negative";
    }


    
    return 0;
}