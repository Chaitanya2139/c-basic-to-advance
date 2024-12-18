#include<iostream>
using namespace std;
int main() {
    int x[5];
    for (int i=0; i<5;i++){
    cout<<"Enter the value for array uptil 5 number: ";
    cin>>x[i];
    }
    for(int i=0; i<5; i++){
        cout<< "["<<i<<"]-"<< " "<< x[i]<<endl;
    }
   return 0; 
}