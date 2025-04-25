// using the co-ordinate formula x^2 + y^2 = r^2

#include <iostream>
using namespace std;

string pointPosition(int radius, int pointX, int pointY) {
    int radiusSquared = radius * radius;
    int distanceSquared = pointX * pointX + pointY * pointY;

    if (distanceSquared < radiusSquared) {
        return "Inside the circle";
    } else if (distanceSquared == radiusSquared) {
        return "On the circle";
    } else {
        return "Outside the circle";
    }
}

int main() {
    int radius;
    int pointX, pointY;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Enter the point coordinates (x, y): ";
    cin >> pointX >> pointY;

    string position = pointPosition(radius, pointX, pointY);
    cout << "The point is " << position << "." << endl;

    return 0;
}
