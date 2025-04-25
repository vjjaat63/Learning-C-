#include <iostream>
using namespace std;

class Fibonacci {
public:
    int series[100];
    int size;

    Fibonacci(int n) {
        size = (n < 100) ? n : 100;
        series[0] = 0;
        if (size > 1) {
            series[1] = 1;
        }

        for (int i = 2; i < size; i++) {
            series[i] = series[i - 1] + series[i - 2];
        }
    }

    Fibonacci(const Fibonacci& obj) {
        size = obj.size;
        for (int i = 0; i < size; i++) {
            series[i] = obj.series[i];
        }
    }

    void display() const {
        cout << "Fibonacci Series: ";
        for (int i = 0; i < size; i++) {
            cout << series[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Enter a positive integer." << endl;
        return 1;
    }

    Fibonacci fib(n);
    fib.display();

    Fibonacci fibCopy = fib;
    fibCopy.display();

    return 0;
}

