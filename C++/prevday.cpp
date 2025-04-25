// program to tell the previous date

#include <iostream>
using namespace std;
void prevdate(int d, int m, int y)
{
    if(d!=1)
    {
        d--;
    }
    else if(d==1)
    {
        if(m==4 || m==6 || m==9 || m==11 || m==2 || m==10)
        {
            d=31;m--;
        }
        else if(m==5 || m==7 || m==8 || m==12)
        {
            d=30;m--;
        }
        else if(m==1)
        {
            d=31;m=12;y--;
        }
        else
        {
            if(y%4==0)
            {
                d=29;m--;
            }
            else
            {
                d=28;m--;
            }
        }

         cout<<"Previous date is : "<<d<<"/"<<m<<"/"<<y<<endl;
    }
}
int main()
{
    int d, m, y;
    cout << "Enter the date : ";
    cin >> d;
    cout << endl;
    cout << "Enter the month : ";
    cin >> m;
    cout << endl;
    cout << "Enter the year : ";
    cin >> y;
    cout << endl;
    cout << "The entered date is : " << d << "/" << m << "/" << y<<endl;
    prevdate(d, m, y);
}