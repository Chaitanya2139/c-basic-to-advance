// calculate factorial of a given number
#include<iostream>
using namespace std;
int main() {
    double n;
    double fact = 1;//
    cout<<"Enter which value you want to know factorial about: ";
    cin>>n;

    for(double i=1; i<=n ; i++){

         fact = fact * i ;

    
    }
    cout<<fact; 
   return 0; 
}