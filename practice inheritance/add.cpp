#include<iostream>
using namespace std;
class demo1{
    public:
    int a;
    void getdata1(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
};

class demo2: public demo1{
    public:
    int b;
    void getdata2(){
        cout<<"Enter the value of b: ";
        cin>>b;
    }
};

class demo3: public demo2{
    public:
    int c;
    void getadd(){
        c=a+b;
    }
};

class demo4: public demo3{
    public:
    void display(){
        cout<<"The addition is:  "<< c;
        
    }
};


int main() {
    demo4 d;
    d.getdata1();
    d.getdata2();
    d.getadd();
    d.display();
   return 0; 
}