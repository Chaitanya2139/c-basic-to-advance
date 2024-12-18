#include <iostream>
using namespace std;

int main(){
reversenumber();
return 0;
}


// 10. 
// Reverse the number 
int reversenumber(){
    int num, reverse=0,remainder=0;
    cout<<"Enter Number: ";
    cin>>num;
    while (num!=0){
        remainder=num%10;
        reverse = reverse*10 + remainder;
        num/=10;
    }
    cout<<"Reversed Number= "<<reverse<<endl;
}