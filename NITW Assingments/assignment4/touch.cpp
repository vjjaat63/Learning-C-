#include<iostream>
using namespace std;
int flip()
{
int flip=rand()%2;
return flip;
}
int main()
{
int t=0,h=0,ans;
srand(time(NULL));
for(int i=1;i<=100;i++)
{
ans=flip();
if (ans==0)
h+=1;
else
t+=1;
}
cout<<"Heads : "<<h<<endl;
cout<<"Tails : "<<t<<endl;
}

