#include<iostream>
using namespace std;
int main(){
    int y = 2; 
    int x = 3;
    x = x*y; // x= 6, y=2
    y= x/y; //y = 3, x=6
    x = x/y; //x=6, y=3
    cout<<"this is x "<<x<<endl;
    cout<<"this is y "<<y;
    return 0;

}