#include<iostream>
using namespace std;
int main() {
    int x[20];
    for(int i=0;i<20 ;i++){
        cout<<"Enter the value till 20 array: "<<endl;
        cin>>x[i];
    }

    for(int i=0; i<20;i++){
        cout<< "["<<i<<"]-"<< " "<< x[i]<<endl;
    }

   return 0; 
}