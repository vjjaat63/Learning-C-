#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order of the matrix :   ";
    cin>>n;
    int mat[n][n];
    cout<<"Enter the elements of the matrix : "<<endl;
    for(int  i = 1; i <= n; i++)
    {
    for(int  j = 1; j <= n;j++)
        {
        cout<<"a"<<i<<j<<" : ";
        cin>>mat[i][j];
        }
    }
    cout<<"The entered matrix is : "<<endl;
    for (int  i = 1; i <= n; i++)
    {
        for (int  j = 1; j <= n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"The sum of the diagonal elements is : ";
        int sum=0;    
        for (int  i = 1; i <= n; i++)
        {
            for (int j = 1; j <=n;j++)
            {
            if (i==j)
             {
                sum+=mat[i][i];
             }
            }
        }
        cout<<sum<<endl;
        if (mat[2][1]==0 && mat[3][1]==0 && mat[3][2]==0)
        {
            cout<<"The matrix is a upper triangular matrix "<<endl;
        }
        else
        {
            cout<<"The matrix is not a upper triangular matrix";
        }
}
  