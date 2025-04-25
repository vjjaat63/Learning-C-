// all points lie in a same line if area made by the co-ordinates of those points is 0

#include <iostream>
using namespace std;

bool areCollinear(int x1, int y1, int x2, int y2, int x3, int y3) {
    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    return (area == 0);
}

int main() {
    int x1, y1, x2, y2, x3, y3;

    cout << "Enter coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of the third point (x3, y3): ";
    cin >> x3 >> y3;

    if (areCollinear(x1, y1, x2, y2, x3, y3)) {
        cout << "The points are collinear." << endl;
    } else {
        cout << "The points are not collinear." << endl;
    }

    return 0;
}
