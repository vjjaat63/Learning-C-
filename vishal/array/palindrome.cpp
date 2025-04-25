#include<iostream>
using namespace std;
bool pd(string s,int start,int end)
{
if(start>=end)
return 1;
if(s[start]==s[end])
  {
   start++;
   end--;
   return pd(s,start,end);
  }
else
return 0;
}
int main()
{
string s;
cout<<"Enter any string : ";
cin>>s;
int n=s.length();
cout<<"Length of string is : "<<n<<endl;
bool p;
p=pd(s,0,n-1);
if(p==1)
	cout<<"The entered string is a palindrome .";
else
	cout<<"The entered string is not a palindrome." ;
}
