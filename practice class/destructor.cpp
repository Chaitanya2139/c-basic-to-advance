#include<iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<"calling constructor"<<endl;
    }
    ~demo(){
        cout<<"destructor is calling: delete object"<<endl;
    }

};
int main() {
    demo d;
    demo d1;
    cout<<"exit scope "<<endl;
   return 0; 
}