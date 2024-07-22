#include <iostream>
using namespace std;
void multiplyMatrices(int firstMatrix[3][3], int secondMatrix[3][3], int resultMatrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int firstMatrix[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };
    int secondMatrix[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {3, 2, 1}
    };
    int resultMatrix[3][3];
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);
    cout << "Resultant Matrix:" << endl;
    displayMatrix(resultMatrix);
    return 0;
}

