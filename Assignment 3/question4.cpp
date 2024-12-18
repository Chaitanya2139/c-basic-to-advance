//4.A program that displays the name of the day based on the number entered by the user    (1 for Monday, 2 for Tuesday, etc.).
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>> a;
    if (a==1){
        cout<<"Today is Monday";
    }
    else if (a==2){
        cout<<"Today is Tuesday";
    }
    else if (a==3){
        cout<<"Today is Wednesday";
    }
    else if (a==4){
        cout<<"Today is Thursday";
    }
    else if (a==5){
        cout<<"Today is Friday";
    }
    else if (a==6){
        cout<<"Today is Saturday";
    }
    else {
        cout<<"Today is Sunday";
    }


    
    return 0;
}