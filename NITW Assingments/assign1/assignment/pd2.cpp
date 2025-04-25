#include<iostream>
using namespace std;
bool pd(string s,int start,int end)
{
   if (start>=end)
   {
    return true;
   }
   else if(s[start]==s[end])
   {
    start++;
    end--;
    return pd(s,start,end);
   }
   else
   {
    return false;
   }
}

    int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
    int n=s.size();
    cout<<"Size of the string is : "<<n<<endl;
    bool b = pd(s,0,n-1);
    if (b==0)
    {
        cout<<"The input string is not a palindrome";
    }
    else
        cout<<"The input string is a palindrome";
    
}