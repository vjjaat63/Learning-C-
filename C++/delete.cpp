#include<iostream>
using namespace std;
// void print(int m,int n)
// {
//     if(m==n)
//     {
//         cout<<m;
//         return;
//     }
//     cout<<m<<endl;
//     print(m+1,n);
    
// }
// int main()
// {
//     int m=1,n;
//     cin>>n;
//     print(m,n);
// }
void print(int n)
{
    if (n==1)
    {
        cout<<1<<endl;
        return;
    }
print(n-1);
cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    print(n);
}