#include<iostream>
using namespace std;

int main(){
    int a , b,area;
    cin>>a>>b;
    try{
        if(a<0||b<0)
        throw ("dimension cannot be negative !");
    }
    catch(const char* e){
        cout<<e;
        return 0 ;
    }
        area = a*b;
    
    cout<<"Area is : "<<area;
}