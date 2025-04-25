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

    void Center(double x, double y) {
        this->x = x;
        this->y = y;
    }

    void Radius(double r) {
        this->r = r;
    }

    void getinfo() {
        cout << "x : " << x << " y : " << y << endl;
        cout << "Radius is : " << r << endl;
    }

    double area() {
        return 3.14 * r * r;
    }

    double perimeter() {
        return 2 * 3.14 * r;
    }
};

int main() {
    double x, y, r;

    cout << "Enter the coordinates of the circle: ";
    cin >> x >> y;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    circleType c;
    c.Center(x, y);
    c.Radius(r);

    cout << "The coordinates of the center of the circle are: ";
    c.getinfo();

    cout << "Area: " << c.area() << endl;
    cout << "Perimeter: " << c.perimeter() << endl;

    return 0;
}

