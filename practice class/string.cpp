#include<iostream>
#include<string>
using namespace std;
int main() {
    string *arr= new string[3];
    arr[0]="Hey";
    arr[1]="Hello";
    arr[2]="Hmm";

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;


 delete[] arr;
 cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;


   return 0; 
}