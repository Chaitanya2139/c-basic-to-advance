#include<iostream>
using namespace std;
int main() {
    int *arr= new int[3];
    arr [0]=10;
    arr [1]= 20;
    arr[2]= 30;

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

delete[] arr;
cout<<arr[0]<<endl;
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;


   return 0; 
}