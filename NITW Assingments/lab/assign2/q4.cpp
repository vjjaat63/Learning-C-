#include<iostream>
using namespace std;

int main(){
 float a,b,c;
 cout<<"Enter three numbers named as a,b and c "<<endl;
 cout<<"a : ";cin>>a;cout<<"b : ";cin>>b;cout<<"c : ";cin>>c;

 if(a>b && a>c)
  cout<<"a (i.e. " <<a<<" ) is greatest : ";  
 else if(b>a && b>c)
  cout<<"b (i.e. " <<b<<" ) is greatest : ";
 else
  cout<<"c (i.e. " <<c<<" ) is greatest : ";
 
 return 0;
}
