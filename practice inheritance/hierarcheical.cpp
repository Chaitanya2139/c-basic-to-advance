#include<iostream>
using namespace std;
class base1{ 
    public:
    int a;
    void getdata1(){
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<" value for a"<<a<<endl;
    }

};

class base2: public base1{ 
    public:
    int b;
    void getdata2(){
        cout<<"Enter the first number: ";
        cin>>b;
        cout<<" value for b"<<b<<endl;
    }

};

class Hbase: public base1{
    
};

int main() {
    base2 b;
    Hbase h;
    b.getdata1();
    b.getdata2();
    h.getdata1();
   return 0; 
}