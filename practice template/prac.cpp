#include<iostream>
using namespace std;
template<class T>
T display(T x){
    return x;
}

int main() {
    cout<<display<string>("hello");
   return 0; 
}