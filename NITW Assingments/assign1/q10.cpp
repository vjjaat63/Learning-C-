#include<iostream>
using namespace std;

int main(){
 int n,notes=0;
 cout<<"Enter the change given to Pranav : ";
 cin>>n;

 notes+=n/100;
 n = n%100;
 notes+=n/50;
 n = n%50;
 notes+=n/10;
 n = n%10;
 notes+=n/5;
 n = n%5;
 notes+=n/2;
 n = n%2;
 notes+=n/1;
 cout<<"Minimum number of notes required is : "<<notes <<endl;

return 0;
}
