#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream fout ("demo.txt");
    string str_name="Hello Hi";
    fout<<str_name;
    fout.close();
    return 0;
}