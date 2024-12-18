#include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"Base class"<<endl;
    }
};

class derived:public base{
    public:
    void display(){
        cout<<"Derived class"<<endl;
    }
};

int main() {
    base *ptr;
    derived obj;
    ptr=&obj;
    ptr->display();
    obj.display();
    

   return 0; 
}