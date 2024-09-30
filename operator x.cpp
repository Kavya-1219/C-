#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];
public:
    Matrix(int m[2][2]) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                mat[i][j] = m[i][j];
            }
        }
    }

    Matrix operator*(const Matrix& obj) {
        int result[2][2];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    result[i][j] += mat[i][k] * obj.mat[k][j];
                }
            }
        }
        return Matrix(result);
    }

    void printMatrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int mat1[2][2] = { {1, 2}, {3, 4} };
    int mat2[2][2] = { {2, 0}, {1, 2} };

    Matrix m1(mat1), m2(mat2);
    Matrix m3 = m1 * m2;

    cout << "Result of Matrix Multiplication:" << endl;
    m3.printMatrix();

    return 0;
}

