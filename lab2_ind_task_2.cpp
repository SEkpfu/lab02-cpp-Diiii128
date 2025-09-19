#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    double x;
    int a;

    cout << "Введите x\n";
    cout << "x = ";
    cin >> x;

    a = 1 * (x <= 0) + 2 * ( x > 0 && x <= 7) + 3 * (x > 7);

    switch(a) {
        case(1): cout << "y = " << (x * x * x - 5) / (x - 1); break;
        case(2): cout << "y = " << 10.0 + 4.0/7.0; break;
        case(3): cout << "y = " << sqrt(x * x + 1); break;
    }
}