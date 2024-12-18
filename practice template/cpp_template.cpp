#include<iostream>
using namespace std;
template <class T>
class demo{
    public:
    T a;
    demo(T b){
        a=b;
    }
void display(){
    cout<<a;
}
};
int main() {
    demo <string> d("Chaitanya ");
    d.display();
   return 0; 
}