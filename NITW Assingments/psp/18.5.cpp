
#include<iostream>
#include<string>
using namespace std;
void strcpy(string &s1 , string &s2)
 { 
   s1=s2;
 }
string strncpy1(string &s2 , int n)
 {
string s1;
  for(int i=0;i<n;i++)
	s1+=s2[i];
	return s1;
 }
 bool strcmp(string s1, string s2)
 {
	if(s1==s1)
	 return true;
	else
	 return false;
 }
 bool strncmp(string &s1, string &s2 , int n)
 {
  for(int i=0;i<n;i++){
	if(s1[i]!=s2[i])
		return 0;
	    }
	return 1;
 }
 int strlen(string s1)
 {
 int size = 0,i=0;
 while(s1[i]!='\0'){
	size ++;
	i++;
	}
 return size;
 }
 string strcat(string &s1,string &s2)
 {
 return s1+s2;
 }
 string strncat(string &s1 ,string &s2 , int n)
 {
 string s4;
 for(int i=0;i<n;i++){
 	s4+=s2[i];
	}
 return s1 + s4;
}
int atoi(string s1)   // "23423"
{
int ans=0;
for(int i=0;i<s1.size();i++)
	{
	ans=ans*10 + (s1[i] - '0');
	}
return ans;
}
string itoa(int num) // 23423
{
 string s;
 while(num!=0)
	{
	 s+=num%10+'0';
	 num=num/10;
	}
 int start=0,end=s.size()-1;
 while(start<=end)
 {
 swap(s[start],s[end]);
 start++;
 end--;
 }
 return s;
}
int main(){
string s1 = "string ";
string s2;
strcpy(s2,s1);
cout<<s2<<endl<<endl;
string s3;
s3=strncpy1(s1,3);
cout<<s3<<endl<<endl;
strcmp(s1,s2);
cout<<endl;
strncmp(s1,s2,3);
cout<<endl;
cout<<strlen(s1)<<endl;
cout<<strcat(s1,s2);
string s4 = "1234";
cout<<atoi(s4)<<endl;
int n=1234;
cout<<itoa(n);
}
