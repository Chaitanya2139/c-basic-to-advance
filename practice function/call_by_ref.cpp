#include<iostream>
using namespace std;
void callbyref(int &a){
    a = a+10;
    cout<<"value of c "<<a;

}
int main() {
    int x=10;
    cout<<"before call by value"<<x<<endl;
    callbyref(x);
    cout<<"after call by value "<<x;
   return 0; 
}