#include<iostream>
using namespace std;
int main() {
    try{
        int a =10;
        int b= 0;
        if(b==0){
            throw 404;
        }
        int c=a/b;
        cout<<c;
    }
    catch(int num){
        cout<<"can not divie by 0 "<< endl;
        cout<<"Error Number "<<num;
    }
   return 0; 
}