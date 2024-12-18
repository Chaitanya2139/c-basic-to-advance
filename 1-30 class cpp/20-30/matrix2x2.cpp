#include <iostream>
using namespace std;

class Matrix {
private:
    int matrix[2][2]; // Declare a 2x2 matrix

public:
    // Function to input values into the matrix
    void createMatrix() {
        cout << "Enter values for a 2x2 matrix:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << "Enter element [" << i << "][" << j << "]: ";
                cin >> matrix[i][j];
            }
        }
    }

    // Function to display the matrix
    void displayMatrix() {
        cout << "The 2x2 matrix is:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m;  // Create an object of the Matrix class

    m.createMatrix();  // Call the method to input values
    m.displayMatrix(); // Call the method to display the matrix

    return 0;
}
