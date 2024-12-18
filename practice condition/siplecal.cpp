#include<iostream>
using namespace std;
int main() {
    char op;
    int a,b;
    cout<<"Enter value a: ";
    cin>> a;

    cout<<"Enter value b: ";
    cin>> b;

    cout<<"Enter value operation: ";
    cin>> op;

    switch(op){
        case '+':
            cout<<"This is your addition: "<< a+b;
            break;

        
        case '-':
            cout<<"This is your subtraction: "<< a-b;
            break;
        case '/':
            cout<<"This is your division: "<< a/b;
            break;

        case '*':
            cout<<"This is your multiplication: "<< a*b;
            break;
            
    }

   return 0; 
}