#include<iostream>
using namespace std;
int main()
{
float hard,crbn,tens;
cout<<"Hardness of steel : ";
cin>>hard;
cout<<"Carbon content : ";
cin>>crbn;
cout<<"Tensile strength : ";
cin>>tens;
if(hard>50&&crbn<0.7&&tens>5600)
{
cout<<"Grade is : 10";
}
else if(hard>50&&crbn<0.7&&tens<=5600)
{
cout<<"Grade is : 9";
}
else if(hard<=50&&crbn<0.7&&tens>5600)
{
cout<<"Grade is : 8";
}
else if(hard>50&&crbn>=0.7&&tens>5600)
{
cout<<"Grade is : 7";
}
else if(hard>50&&crbn>=0.7&&tens<=5600)
{
cout<<"Grade is : 6";
}
else if(hard<=50&&crbn<0.7&&tens<=5600)
{
cout<<"Grade is : 6";
}
else if(hard<=50&&crbn>=0.7&&tens>5600)
{
cout<<"Grade is : 6";
}
else
{
cout<<"Grade is : 5";
}
return 0;
}


