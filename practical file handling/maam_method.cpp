#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "example.txt";

    fstream file(filename, ios::in | ios::out | ios::app);
    if (!file.is_open()) {
        cout << "Error. Unable to open the file!" << endl;
        return 1;
    }

    file << "This is a new line of text.\n";
    file.close();

    ifstream readFile(filename);
    if (!readFile.is_open()) {
        cout << "File not found!" << endl;
        return 1;
    }

    string line;
    cout << "File contents:" << endl;
    while (getline(readFile, line)) {
        cout << line << endl;
    }
    readFile.close();

    return 0;
}
