#include<iostream>
#include<string>
using namespace std;
int main()
 {
 cout<<"Enter any text or paragraph : ";
 string s;
 cin>>s;
 string ans;
 for(int i=0;i<s.length();i++)
 {
  if(s[i]!=' ')
   {
     ans+=s[i];
   }
  if(s[i]==' ')
   {
   if(s[i+1]!=' ')
   ans+=' ';
   }
 }
cout<<ans;
cout<<endl;
}
