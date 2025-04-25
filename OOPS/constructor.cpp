#include<iostream>
using namespace std;
class customer{
    public:
    string name;
    int acc_no;
    int balance;
    public :
    // default constructor
    customer(){
        name = "Vishal";
        acc_no = 100000;
        balance = 300;
    }
/*  parameterized construcor
    inline customer(string a, int b,int c):name(a),acc_no(b),balance(c){
        
    }*/ 
    customer(string s,int acc,int bal){
        name=s;
        acc_no=acc;
        balance=bal;
    }
    customer(string name,int acc_no){
    this->name = name ;    //without this the compiler is not able to differentiate b/w both name so it just the values of both name from the value passed to it i.e. which is nearby
    this->acc_no = acc_no;
    }
    
    void show(){
        cout<<name << " " << acc_no <<" "<< balance<<endl;
    }
    
    void show2(){
        cout<<name << " " << acc_no <<endl;
    }
};
int main()
{
    customer b, c("Vishal" , 2337492 , 4), d("Jaat" , 1239847 , 8), e("Jhajhria" , 9034832, 3), f("vishal" , 1234) , a(d);
    a.show();
    b.show();
    c.show();
    d.show();
    e.show();
    f.show2();
}
