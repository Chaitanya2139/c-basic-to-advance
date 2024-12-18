#include<iostream>
using namespace std;

class demo1{
    public:
    int a;
    void getdata(){
        cout<<"Enter the number: ";
        cin>>a;
    }

};
class demo2: public demo1{
    public:
    void display(){
        cout<<"value of a is "<< a;
    }
};

int main() {
    demo2 d;
    d.getdata();
    d.display();

   return 0; 
}