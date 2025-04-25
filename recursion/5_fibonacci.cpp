// It should be noticed that here we are not asked to print fibonacci seriees of first n numbers but the series till the nth number

#include<iostream>
#include<vector>
using namespace std;
void fibonacci(int n , vector<int> &ans , int a ,int b)
{
    if(a>n)
        return;
    else if(a == n )
        ans.push_back(a);
    else
    {
        ans.push_back(a);
        fibonacci(n,ans,b,a+b);
    }

    
}

int main()
{
    int n ;
    vector<int> ans;   // to store the series
    cout<<"Enter the last term of the fibonacci series : ";
    cin>>n;
    fibonacci(n,ans,0,1);

    if(ans[ans.size()-1] == n)    // checking whether the entered number belongs to fibonacci series or not
    {
        for (int i = 0; i < ans.size(); i++) // printing the series
        {
            cout<<ans[i]<<" ";
        }
    }
    else
        cout<<"The entered number does not belong to fibonacci series.";

    return 0;

}