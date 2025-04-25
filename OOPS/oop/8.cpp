#include <iostream>
using namespace std;

class Matrix {
private:
    static const int SIZE = 3; // Size of the matrix (3x3)
    int data[SIZE][SIZE];

public:
    void input() {
        cout << "Enter elements of the matrix (" << SIZE << "x" << SIZE << "):" << endl;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                cin >> data[i][j];
            }
        }
    }

    void display() const {
        cout << "Matrix (" << SIZE << "x" << SIZE << "):" << endl;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    void add(Matrix* mat1, Matrix* mat2, Matrix* sum) const {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                sum->data[i][j] = mat1->data[i][j] + mat2->data[i][j];
            }
        }
    }
};

int main() {
    Matrix mat1, mat2, sum;

    cout << "Input for Matrix 1:" << endl;
    mat1.input();
    mat1.display();

    cout << "Input for Matrix 2:" << endl;
    mat2.input();
    mat2.display();

    mat1.add(&mat1, &mat2, &sum);
    cout << "Sum of the two matrices:" << endl;
    sum.display();

    return 0;
}
