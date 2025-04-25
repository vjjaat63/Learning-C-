// program to tell the next date

#include <iostream>
using namespace std;
void nextdate(int d, int m, int y)
{
    if (m==2)
    {
         if(d==28)
        {
            if (y%4==0)
                d++;
            else
                d=1;m=3;
        }
        else if(d==29)
        {
          d=1;m=3;
        }
        else
        d++;
    }
    else if(m==4 || m==6 || m==9 || m==11)
    {
        if(d==30)
        {
            d=1;m++;
        }
        else
        d++;
    }
    else if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10)
    {
        if(d==31)
        {
            d=1;m++;
        }
        else
        d++;
    }
    else if(m==12)
    {
        if(d==31)
        {
           d=1;m=1;y++;
        }
        else
        d++;
    }
    cout<<"Next date is : "<<d<<"/"<<m<<"/"<<y<<endl;
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
    nextdate(d, m, y);
}