#include <iostream>
using namespace std;
int sumofsquare(int n);
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // cout<<(n*(n+1)*((2*n)+1))/6<<endl;
    cout<<sumofsquare(n);
}
int sumofsquare(int n)
{
    if (n==1)
    {
            return 1;
    }
    
    return (n*n)+sumofsquare(n-1);
}