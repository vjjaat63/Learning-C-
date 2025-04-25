#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:

    Circle(double r){
      radius=r;
     }

    double getRadius() {
        return radius;
    }
};

double circumference(Circle& circle) {
    double PI = 3.14159;
    return 2 * PI * circle.getRadius();
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);

    double Circumference = circumference(circle);
    cout << "The circumference of the circle is: " << Circumference << endl;

    return 0;
}
