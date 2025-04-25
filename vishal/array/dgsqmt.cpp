#include<iostream>
using namespace std;
int main()
{
int n;//order of the matrix
cout<<"Enter the order of the matrix : ";
cin>>n;
int arr[n][n];
cout<<"enter the elements of the matrix : "<<endl;
for(int i=1;i<=n;i++)
	{
	for(int j=1;j<=n;j++)
		{
		cout<<"a"<<i<<j<<": ";
		cin>>arr[i][j];
		cout<<endl;
		}
	}
int sum=0;
for(int i=1;i<=n;i++)
        {
        for(int j=1;j<=n;j++)
                {
		if(i==j)
		sum+=arr[i][j];
                }
        }
cout<<"sum of diagonal elements of the array is : "<<sum<<endl;
//checking upper triangular matrix or not
bool value;
for(int i=1;i<=n;i++)
        {
        for(int j=1;j<=n;j++)
                {
		if(arr[i][j]==0 && i>j)
		value=1;
		else
		value=0;
		}
	}
if(value==1)
cout<<"upper triangular. ";
else
cout<<"not upper trangular. ";
return 0;
}
