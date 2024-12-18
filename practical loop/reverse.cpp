#include<iostream>
using namespace std;
int main() {
    int num, reverse = 0, remainder;
    cout<<"Enter a number: ";
    cin>>num;

    while (num!=0){
        remainder = num %10;
        reverse = reverse *10+ remainder;
        num/= 10;
    }
    cout<<"Reverse number: "<< reverse << endl;
   return 0; 
}

/* num = 123!=0
   remainder= 3
   reverse = 0 *10+ 12.3=12.3
   num= 123/10= 12.3
   
   num =12.3
   remainder = 12 %10 = 2
   reverse = 12.3*10 + 2= 125 
   num = 12.3/10= 1.23
   
   num = 1.23
   remainder= 2% */