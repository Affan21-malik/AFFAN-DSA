#include <iostream>
using namespace std;

void multiplyMatrix(int a[][3], int b[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {       // i = rows
        for (int j = 0; j < cols; j++) {   // j = columns
            result[i][j] = 0;              // reset

            for (int k = 0; k < cols; k++) {  // k = common dimension
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int b[3][3] = { {9,8,7}, {6,5,4}, {3,2,1} };
    int result[3][3];

    multiplyMatrix(a, b, result, 3, 3);

    cout << "Matrix Multiplication result:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
