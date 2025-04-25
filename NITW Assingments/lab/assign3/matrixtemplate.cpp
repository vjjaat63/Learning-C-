#include <iostream>
using namespace std;

template <class T>

class matrix
{
public:
    T **mat;
    int size;

    // declaration
    matrix(int n)
    {
        size = n;
        mat = new T *[size];
        for (int i = 0; i < size; i++)
        {
            mat[i] = new T[size];
        }
    }

    // initialization
    void initialize()
    {
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                cin >> mat[i][j];
    }

    // display
    void show()
    {
        cout << endl;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // addition
    matrix add(matrix other)
    {
        matrix result(size);

        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                result.mat[i][j] = this->mat[i][j] + other.mat[i][j];

        return result;
    }

    // subtraction
    matrix sub(matrix other)
    {
        matrix result(size);

        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                result.mat[i][j] = this->mat[i][j] - other.mat[i][j];

        return result;
    }

    // multiplication
    matrix mul(matrix other)
    {
        matrix result(size);

        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                result.mat[i][j] = 0;

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                for (int k = 0; k < size; k++)
                {
                    result.mat[i][j] += this->mat[i][k] * other.mat[k][j];
                }
            }
        }

        return result;
    }
};

int main()
{
    int n;
    cout << "Enter the size of the square matrix : ";
    cin >> n;
    matrix<char> mat1(n), mat2(n);
    cout << "Enter the elements of matrix 1 : ";
    mat1.initialize();
    cout << "Enter the elements of matrix 2 : ";
    mat2.initialize();
    cout << "Matrix 1 is : ";
    mat1.show();
    cout << "Matrix 2 is : ";
    mat2.show();

    matrix<char> mat3(n);
    mat3 = mat1.add(mat2);
    cout << "Sum of the matrices is : ";
    mat3.show();

    mat3 = mat1.sub(mat2);
    cout << "Difference of the matrices is : ";
    mat3.show();

    mat3 = mat1.mul(mat2);
    cout << "Product of the matrices is : ";
    mat3.show();

    return 0;
}