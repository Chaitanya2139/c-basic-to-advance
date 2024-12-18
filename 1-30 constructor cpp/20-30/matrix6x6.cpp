#include <iostream>
using namespace std;

class Matrix {
private:
    int matrix[6][6];  // Declare a 6x6 matrix

public:
    // Constructor to initialize the matrix with values
    Matrix() {
        int value = 1; // Start with 1 for filling the matrix
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                matrix[i][j] = value++;  // Fill the matrix with sequential values
            }
        }
        cout << "Matrix initialized." << endl; // Indicating matrix initialization
    }

    // Destructor to clean up or finalize actions (although it's not strictly necessary in this case)
    ~Matrix() {
        cout << "Matrix destroyed." << endl; // Indicating matrix destruction
    }

    // Function to display the matrix
    void displayMatrix() {
        cout << "6x6 Matrix:" << endl;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                cout << matrix[i][j] << "\t";  // Print each element with tab space
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m;  // Create an object of the Matrix class, which calls the constructor

    m.displayMatrix();  // Call the method to display the matrix

    // No need to explicitly call the destructor; it will be called automatically when the object goes out of scope.

    return 0;
}
