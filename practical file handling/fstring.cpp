#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {

    fstream my_file("demo3.txt", ios::out);

    if(!my_file){
        cout<<"Failed to open the file for append";
        return 0;
    }
    my_file<<"Line 4"<<endl;
    my_file<<"Line 5"<<endl;
    my_file<<"Line 6"<<endl;

    my_file.close();

   return 0; 
}