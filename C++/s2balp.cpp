#include<iostream>
using namespace std;
char alp(char c)
{
    char d;
    d=c-'a'+'A';
    //d=c-32;
    return d;
}
int main()
{
    char a;
    cout<<"Enter any lower case alphabet : ";
    cin>>a;
    cout<<endl;
    cout<<alp(a);
}