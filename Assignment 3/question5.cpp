//5.A simple grading system using switch to select the grade based on marks
#include<iostream>
using namespace std;
int main()
{
    int grade;
    cout<<"Enter Grade: ";
    cin>>grade;

    switch(grade) {
        case 90:
            cout<<"Your grade A";
            break;
        case 80:
            cout<<"Your grade B";
            break;
        case 70:
            cout<<"Your grade C";
            break;
        case 60:
            cout<<"Your grade D";
            break;
        case 50:
            cout<<"Your grade E";
            break;
        case 40:
            cout<<"Your grade F";
            break;
        case 30:
            cout<<"Your grade G";
            break;
        case 20:
            cout<<"Your grade H";
            break;
        case 10:
            cout<<"Your grade I";
            break;
    }   
    return 0;
}
