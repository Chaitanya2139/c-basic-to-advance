//this is the simple interest calculation
#include<iostream>
using namespace std;
int main(){
    float P,R,T;
    cout<<"Enter the value of P: ";
    cin>>P;
    cout<<"Enter the value of R: ";
    cin>>R;
    cout<<"Enter the value of T: ";
    cin>>T;
    cout<<"the value of SI is "<<((P*R*T)/100)<<endl;
    
    return 0;
}