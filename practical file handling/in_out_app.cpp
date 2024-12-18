#include <iostream>
#include <fstream> 
#include <string>  
using namespace std;

int main() {
    string str;

    
    fstream my_file("demo3.txt", ios::app);
    if (!my_file) {
        cout << "Failed to open the file for append" << endl;
        return 1;
    }

    
    my_file << "Line 1" << endl;
    my_file << "Line 2" << endl;
    my_file << "Line 3" << endl;

    
    my_file.close();
    cout << "Data successfully written to the file." << endl;

    
    ifstream input_file("demo3.txt", ios::in);
    if (!input_file) {
        cout << "Failed to open the file for reading" << endl;
        return 1;
    }

    
    cout << "Contents of the file:" << endl;
    while (getline(input_file, str)) {
        cout << str << endl;
    }

    
    input_file.close();

    return 0;
}
