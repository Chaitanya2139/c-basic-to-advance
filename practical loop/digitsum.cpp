#include<iostream>
using namespace std;
int main() {
    int num, add = 0,numbers;
    cout<<"Enter anothter number: ";
    cin>> num;
    while (num!= 0){
        numbers  = num%10;
        add += numbers;
        num /= 10;
    }
    cout<<"The sum according to digit is: "<< add;

   return 0; 
}