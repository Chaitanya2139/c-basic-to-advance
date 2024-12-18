#include<iostream>
using namespace std;
class demo1{
    protected:
    int a;
    void getdata(){
        cout<<"Enter the number ";
        cin>>a;
    }
};

class demo2: public demo1{
    public:
    void display(){
        getdata();
        cout<<"value of a "<<a;
    }
};

int main() {
    demo2 d;
    d.display();
   return 0; 
}