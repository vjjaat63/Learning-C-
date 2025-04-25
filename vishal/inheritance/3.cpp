#include <iostream>
using namespace std;

class pointType {
public:
    double x;
    double y;
};

class circleType : public pointType {
public:
    double r;
};

class cylinderType : public circleType{
 public:
   double h;

    void Center(double x, double y) {
        this->x = x;
        this->y = y;
    }

    void Radius(double r) {
        this->r = r;
    }

    void Height(double h){
        this->h = h;
    }

    void getinfo() {
        cout << "x : " << x << " y : " << y << endl;
        cout << "Radius is : " << r << endl;
        cout << "Height is : " << h <<endl;
    }

    double area() {
        return 2*3.14*r*r+2*3.14*r*h;
    }

    double volume() {
        return 3.14*r*r*h;
    }
};

int main() {
    double x, y, r,h;

    cout << "Enter the coordinates of the circle on the top and botton of the cylinder: ";
    cin >> x >> y;
    cout << "Enter the radius of that circle: ";
    cin >> r;
    cout << "Enter the height of the cylinder: ";
    cin >> h;


    cylinderType c;
    c.Center(x, y);
    c.Radius(r);
    c.Height(h);
    cout << "The coordinates of the center of the circle are: ";
    c.getinfo();

    cout << "Area: " << c.area() << endl;
    cout << "Volume: " << c.volume() << endl;

    return 0;
}
