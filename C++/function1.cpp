#include<iostream>
using namespace std;
bool prime(int n)
{
if (n<2)
return 0;
for (int i=2;i<n;i++)
{
    if (n%i==0)
    return 0;
    else
    return 1;
}
}
int fact(int n)
{
    int f=1;
    if (n<1)
    return 0;
    for (int i=1;i<=n;i++)
    f*=i;
    return f;
}
void no()
{
    cout<<"It means nothing";
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b : ";
    cin>>a>>b;
    cout<<prime(a);
    cout<<endl;
    cout<<fact(a);
    cout<<endl;
    cout<<prime(b);
    cout<<endl;
    cout<<fact(b);
    cout<<endl;
    cout<<prime(b+a);
    cout<<endl;
    cout<<fact(b+a);
    cout<<endl;
    cout<<prime(b-a);
    cout<<endl;
    cout<<fact(b-a);
    cout<<endl;
    no();
}