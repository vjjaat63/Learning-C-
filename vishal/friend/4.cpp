#include <iostream>
using namespace std;

class Matrix {
    int row, col;
    int mat[100][100];

public:
    Matrix(int m, int n)
    {
     row = m;
     col = n;
    }

    void getData()
   {
        cout << "Enter elements of the matrix: "<<endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> mat[i][j];
            }
        }
    }

    void show()
   {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+( Matrix other) {
        Matrix result(row, col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }
};

int main() {
    int m, n;
    cout << "Enter number of rows and columns (max 100): "<<endl;
    cout<<"rows : ";
    cin>>m;
    cout<<"columns : ";
    cin>>n;

    if (m > 100 || n > 100) {
        cout << "Maximum size is 100x100." << endl;
        return 1;
    }

    Matrix m1(m, n);
    Matrix m2(m, n);

    m1.getData();
    m2.getData();

    m1.show();
    m2.show();

    Matrix m3 = m1 + m2;

    cout << "Matrix 1:\n";
    m1.show();
    cout << "Matrix 2:\n";
    m2.show();
    cout << "Resultant Matrix:\n";
    m3.show();

    return 0;
}
