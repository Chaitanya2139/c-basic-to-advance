#include <iostream>
using namespace std;

int main(){
factorial();
return 0;
}

int factorial(){
    int num; // define var integar num
    cout<<"Enter Number: "; // ask for num
    cin>>num; // save the num
    int res; 
    for(int i=1;i<=num;i++){
        res*=i;
    }
    cout<<num<<"!"<<" = "<<res<<endl;
return 0;
}