#include<iostream>
using namespace std;
void size(string s);
void palindrome(string s);
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    palindrome(s);
    size(s);
}
void palindrome(string s)
{
    string t=s;
    int i=0,n=s.size(),j=n-1;
    while(i<=j)    
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
if(t==s)
{
    cout<<"The enterd number is a pilindrome "<<endl;
}
else
{
    cout<<"The entered number is not a pelindrome "<<endl;
}
    
}
void size(string s)
{
cout<<s.size()<<endl;
}