#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int n;
 cout<<"Enter the number of names : ";
 cin>>n;
 string name[n];
 //input
 for(int i=0;i<n;i++)
  {
   cin>>name[i];
  }
	//sorting using bubble sort
  for(int i=0;i<n-2;i++)
	{
	for(int i=0;i<n-1;i++){
	if (name[i]>name[i+1])
	swap(name[i],name[i+1]);
	}}
	//output
  for(int i=0;i<n;i++)
 cout<<name[i]<<" ";
}
