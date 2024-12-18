#include<iostream>
using namespace std;
template <class T>
T display(T x){
    return x;
}
double display(double x1){
    return x1;
}
int main() {
    cout<<"calling "<<display(10)<<endl;
    cout<<"calling "<<display(10.5)<<endl;


   return 0; 
}