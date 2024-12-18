#include <iostream>
using namespace std;

int main(){
simpleintreastcalc();
return 0;
}

// 11.// Simple Interest Calculation
float p,t,r;
int simpleintreastcalc(){
    cout<<"Enter Value of Principle : ";
    cin>>p;
    cout<<"Enter Time Period : ";
    cin>>t;
    cout<<"Enter Rate of intrest (%) : ";
    cin>>r;
    cout<<"Your Simple intrest is "<<p*t*(r/100);
}
