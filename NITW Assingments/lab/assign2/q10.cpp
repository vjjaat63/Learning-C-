#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0||n==1)
        return 1;
    
    return n*factorial(n-1);
}

bool isKrishna(int num){
    int n = num,result = 0;

    while(n){
        result+= factorial(n%10);
        n = n /10;
    }

    return result==num;

}
int main()
{
    int num;
    cout<<"Enter a positive integer : ";
    cin>>num;

    if(isKrishna(num))
        cout<<"Entered number is a Krishnamurthy number ";
    else
        cout<<"Entered number is not a Krishnamurthy number ";
    return 0;
}