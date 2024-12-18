#include <iostream>

using namespace std;
void display(int a);//function prototype and declaration

int main(){
  int x;
  cout<<"Enter the value "<<x;
  cin>>x;
  display(x);//calling function +passing argument
  return 0;


    


}
void display(int a)//formal parameter
{
    cout<<"Value of a: "<<a;
}