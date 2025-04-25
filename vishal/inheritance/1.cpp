#include <iostream>
#include <cmath>

using namespace std;

class pointType{
public:
 double x;
 double y;

     pointType(double x=0,double y=0){ // setting the co-ordinates
     this->x = x;
     this->y = y;
    }

   double getx(){
     return x;
    }

   double gety(){
     return y;
    }


   void getter(){  // printing the co-ordinates
     cout<<"x-coordinate : "<<getx()<<endl;
     cout<<"y-coordinate : "<<gety()<<endl;
    }
};

class operations : public pointType{

public:

  pointType add(pointType A , pointType B){
   pointType C;
   C.x = A.x + B.x;
   C.y = A.y + B.y;
   return C;
  }

  pointType sub(pointType A , pointType B){
   pointType C;
   C.x = A.x - B.x;
   C.y = A.y - B.y;
   return C;
  }

  pointType mul(pointType A , pointType B){
   pointType C;
   C.x = A.x * B.x;
   C.y = A.y * B.y;
   return C;
  }

  pointType div(pointType A , pointType B){
  pointType C;
   C.x = A.x / B.x;
   C.y = A.y / B.y;
   return C;
  }

  double distance(pointType A , pointType B){
    double dsquare = (A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y);
    double d = sqrt(dsquare);
    return d;
  }

};

int main()
{
 double x1,y1,x2,y2;
 
 cout<<"Enter the coordinates of first point : ";
 cin>>x1>>y1;

 cout<<"Enter the coordinates of second point : ";
 cin>>x2>>y2;

 pointType A(x1,y1),B(x2,y2),C;
 operations a;

 C = a.add(A,B);
 cout<<"After adding "<<endl;
 C.getter();

 C = a.sub(A,B);
cout<<"After subtracting "<<endl;
 C.getter();

 C = a.mul(A,B);
cout<<"After mutiplying "<<endl;
 C.getter();

 C= a.div(A,B);
cout<<"After dividing "<<endl;
 C.getter();

 double d = a.distance(A,B);
 cout<<"distance between the two points is : " << d;

return 0;
}
