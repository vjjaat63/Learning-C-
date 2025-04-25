#include<iostream>
using namespace std;
int main()
{
int order;
cout<<"Enter the order of matrices : ";
cin>>order;
int matrix1[order][order],matrix2[order][order];
cout<<"Enter the elements of matrix 1 : ";
for(int i=0;i<order;i++)
{
for(int j=0;j<order;j++)
{
cin>>matrix1[i][j];
}
}
cout<<"Enter the elements of matrix 2 : ";
for(int i=0;i<order;i++)
{
for(int j=0;j<order;j++)
{
cin>>matrix2[i][j];
}
}
cout<<"The elements of matrix1 are : "<<endl;
for(int i=0;i<order;i++)
{
for(int j=0;j<order;j++)
{
cout<<matrix1[i][j]<<" ";
}
cout<<endl;
}
cout<<"The elements of matrix2 are : "<<endl;
for(int i=0;i<order;i++)
{
for(int j=0;j<order;j++)
{
cout<<matrix2[i][j]<<" ";
}
cout<<endl;
}
int sum[order][order]={0};//declaration of array which contain the sum
cout<<"sum of matrices is : "<<endl;
for(int i=0;i<order;i++)
{
for(int j=0;j<order;j++)
{
sum[i][j]=matrix1[i][j]+matrix2[i][j];
cout<<sum[i][j]<<" ";
}
cout<<endl;
}
int difference[order][order]={0};//declaration of array which contain the difference 
cout<<"difference of matrices is : "<<endl;
for(int i=0;i<order;i++)
{
for(int j=0;j<order;j++)
{
difference[i][j]=matrix1[i][j]-matrix2[i][j];
cout<<difference[i][j]<<" ";
}
cout<<endl;
}
int mul[order][order]={0};
for(int i=0;i<order;i++){
for(int j=0;j<order;j++){
for(int k=0;k<order;k++){
mul[i][j]+=matrix1[i][k]*matrix2[k][j];
}}}
cout<<"The multiplication of matrix1 and matrix2 is : " <<endl;
for(int i=0;i<order;i++){
for(int j=0;j<order;j++){
cout<<mul[i][j]<<" ";}cout<<endl;}

cout<<endl;
}
