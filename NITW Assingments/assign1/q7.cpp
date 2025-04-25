#include<iostream>
using namespace std;

void swapping(int &a,int &b){
 int temp = a;
 a = b;
 b = temp;
}

int main(){
 int num1,num2;
 cout<<"Enter first number : ";cin>>num1;
 cout<<"Enter second number : ";cin>>num2;
 
 cout<<endl<<"Before Swapping "<<endl;
 cout<<"first number : "<<num1 <<" | second number : "<<num2<<endl;
 swapping(num1,num2);
 cout<<endl<<"After Swapping "<<endl;
 cout<<"first number : "<<num1 <<" | second number : "<<num2<<endl;

return 0;
}
