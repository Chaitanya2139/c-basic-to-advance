#include<iostream>
using namespace std;
class demo1
{
    protected :
    int a;
    void getdataa()
    {
        cout<<"Enter any number for a:";
        cin>>a;}
    void displaya()
    {
        cout<<"The value you entered  a is:"<<a<<endl;
    }


};
class demo2
{
    public :
    int b;
    void getdatab()
    {
    
        cout<<"Enter any number for b:1";
        cin>>b;}
    void displayb()
    {
        cout<<"the value you enetered  b is:"<<b<<endl;
    }
};
class demo3:public demo1,public demo2
{
    public:
    int s;
    void diaplay(){
        getdataa();
        getdatab();
        displaya();
        displayb();
        s=a+b;
        cout<<"the sum of a and b is :"<<s;

    }
};
int main(){
    demo3 d;
    d.diaplay();
    return 0;

}