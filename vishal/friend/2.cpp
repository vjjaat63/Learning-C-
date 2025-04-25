#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r, float i)
	{
	 real = r;
	 imag = i;
 	}
    friend Complex add(Complex c1, Complex c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex add(Complex c1, const Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    float r1, i1, r2, i2;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;
    Complex c1(r1, i1);

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;
    Complex c2(r2, i2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex sum  = add(c1, c2);

    cout << "Sum of Complex Numbers: ";
    sum.display();

    return 0;
}

