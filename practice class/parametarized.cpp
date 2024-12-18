#include<iostream>
using namespace std;
class demo{
    private:
    int a;

    public:
    demo(int b){
        a=b;
        cout<<"value of a = " << a << endl;
    }
};
int main() {
    demo demo(10);
   return 0; 
}