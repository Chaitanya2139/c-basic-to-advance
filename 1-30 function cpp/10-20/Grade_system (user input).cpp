#include <iostream>
using namespace std;

int main(){
gradesystem();
return 0;
}

int gradesystem(){
    float mark;
    cout<<"Enter Marks: ";
    cin>>mark;
    if (mark>=0 && mark<=35){
        cout<<"Fail Bro!"<<endl;
    }
    else if (mark>=35 && mark<=50){
        cout<<"Grade: C"<<endl;
    }
    else if (mark>=60 && mark<=70){
        cout<<"Grade: B"<<endl;
    }
    else if (mark>=70 && mark<=80){
        cout<<"Grade: A"<<endl;
    }
    else if (mark>=80 && mark<=100){
        cout<<"Grade: A+"<<endl;
    }
}
