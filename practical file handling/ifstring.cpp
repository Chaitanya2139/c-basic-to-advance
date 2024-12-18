#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
    ifstream fin ("demo.txt");
    string string_name;
    while(!fin.eof())
    getline(fin,string_name);
    cout<<string_name;
    fin.close();
   return 0; 
}