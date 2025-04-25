#include<iostream>
using namespace std;

bool primeornot(int n ,int start, int end)
{
    if(n<2)
        return false;

    if(start>end)
        return true ;
    
    if(n%start == 0)
        return false;
    
    return primeornot(n,start+1,end);
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if(primeornot(num,2,num/2))   // if number is prime the this statement will execute
        cout<<"The given number is a prime number .";
    else
        cout<<"The given number is not a prime number .";

}