#include<iostream>
using namespace std;

class Wall{
    private:
    int a;

    public:
    Wall(){
        cout<<"Creating a wall. Please enter value for a "<<endl;
        cin>>a;
        cout<< "a= "<<a<<endl;
    }
};
int main() {
    Wall wall1;
    
   return 0; 
}