#include<iostream>
using namespace std;

class demo{
    public:
    void add(int a, int b)
    {
        int c= a+b;
        cout<<"addition is "<<c<<endl;
    }
    void add(int a, int b, int c){
        int z = a+b+c;
        cout<<"addition is "<<z<<endl;
        
    }
};
int main() {
    demo d;
    d.add(10,30);
    d.add(10,20,30);
   return 0; 

}