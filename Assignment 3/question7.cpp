// 7.A program to check whether a given year is a leap year.
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the year you wanted to know about: ";
    cin>> a;
    if (a%4==0){
        cout<<"This year is leap year";
    }
    else {
        cout<<"This is not an leap year";
    }
    
    return 0;
}
