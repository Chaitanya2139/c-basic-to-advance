// #include<iostream>
// using namespace std;
// void display(int a);

// int main() {
//     int x=10;
//     display(x);

//    return 0; 
// }

// void display(int a){
//     cout<<"value of a is: "<<a;
// }

//second way
// #include<iostream>
// using namespace std;
// void display(int a);

// int main() {
//     // int x=10;
//     display(10);

//    return 0; 
// }

// void display(int a){
//     cout<<"value of a is: "<<a;
// }

#include<iostream>
using namespace std;
void display(int a);

int main() {
    int x;
    cout<<"Enter the value for x: ";
    cin>>x;
    // int x=10;
    display(x);

   return 0; 
}

void display(int a){
    cout<<"value of a is: "<<a;
}