#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    string str;

    fstream my_file("demo3.txt", ios::in);

    
    while(!my_file.eof()){
        getline(my_file,str);
        cout<<str<<endl;
    }
    


    my_file.close();

   return 0; 
}