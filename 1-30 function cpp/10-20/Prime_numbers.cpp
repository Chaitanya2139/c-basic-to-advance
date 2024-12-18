#include <iostream>
using namespace std;

int main(){
isprime();
return 0;
}

int isprime(){
    int num;
    bool flag=false;
    cout<<"Enter Number: ";
    cin>>num;
    for (int i=2;i<num;i++){
        if(num % i != 0){
            flag=true;
            cout<<flag;
            break;
        }
        if (num < 2)
            cout << num << " is NOT prime" << endl;
    }
    if(flag){cout<<"Its an prime number!"<<endl;}
    else{cout<<"Its Not a prime number!"<<endl;}
    return 0;
}