#include <iostream>
using namespace std;

int main() {
    int matrix[6][6] = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };

    cout << "6x6 Matrix:" << endl;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}