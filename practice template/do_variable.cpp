#include<iostream>
using namespace std;
template <class T, class T2>
void display(T x, T2 y){
    cout<<x<<endl<<y<<endl;
}
int main() {
    display("hello", 123);
   return 0; 
}