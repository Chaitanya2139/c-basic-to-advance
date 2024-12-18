#include<iostream>
using namespace std;
class demo1{
    public:
    int a;
    void getdata(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
};
class demo2: public demo1{
    public:
    int c;
    void getsqr(){
        c=a*a;
    }
};
class demo3: public demo2{
    public:
    void display(){
        cout<<"square of a is "<<c;
    }
};
int main() {
    demo3 d;
    d.getdata();
    d.getsqr();
    d.display();
   return 0; 
}
