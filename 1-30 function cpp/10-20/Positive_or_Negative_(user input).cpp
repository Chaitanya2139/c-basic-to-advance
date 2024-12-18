
#include <iostream>
using namespace std;

int main(){
positivenegative();
return 0;
}

int positivenegative(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    if(num<0){cout<<"Negative";}
    else{cout<<"positive";}
}