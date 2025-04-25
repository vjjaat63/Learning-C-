#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void powset(string s , string ans[] , string &temp ,int start , int end , int &ansindex)
{
    if(start==end)
    {
        ans[ansindex] = temp;
        ansindex++;
        return ;
    }

    temp.push_back(s[start]);
    powset(s,ans,temp,start+1,end,ansindex);
    temp.pop_back();               // backtrack
    powset(s,ans,temp,start+1,end,ansindex);

}
int main()
{
    string s;
    cout<<"Enter a string : ";
    cin>>s;

    int n = pow(2,s.size()); // Total subsets
    string ans[n];     // Array to store all substrings or power sets of string s
    int ansindex = 0;   // index to enter the subsets in ans array
    string temp = "";

    powset(s,ans,temp,0,s.size(),ansindex);

    for(int i = 0;i<n;i++)
    {
        cout<<"\""<<ans[i]<<"\""<<"  ";
    }
}