#include<iostream>
using namespace std;

void callbyval(int a){
    int c = a+10;
    cout<<"Value of a "<<c;

}

int main() {
    int x= 10;
    cout<<"before call by  value"<<x;
    callbyval(x);
    cout<<"after call by value"<<x;
   return 0; 
}