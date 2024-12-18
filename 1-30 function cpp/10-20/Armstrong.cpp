
#include <iostream>
using namespace std;

int main(){
armstrong();
return 0;
}

int armstrong(){
    int num, remainder=0, result=0,vnum=0,count=0,temp=0;
    cout<<"Enter the number: ";
    cin>>num;
    vnum=num;
    temp=num;
    while(temp!=0){
        count++;
        temp/=10;
    }
    while(num!=0){
        remainder=num%10;
        result+=pow(remainder,count);
        num/=10;
    }
    if(vnum==result){
        cout<<"Yes The number is amrstrong number"<<endl;
    }
    else{cout<<"No, The number is not amrstrong number"<<endl;}
    return 0;
}
