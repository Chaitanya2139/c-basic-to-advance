#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter the number: ";
    cin >> a;
    if (a >=90){
        cout<<"A+ ";
    }
    else if (a>= 80){
        cout<<"B+";
    }
    else if (a>= 70){
        cout<<"C+";
    }
    else if (a>= 60){
        cout<<"D+";
    }
    else if (a>= 50){
        cout<<"E+";
    }
    else
    {
        cout<<"Error";
    }
    
    


   return 0; 
}