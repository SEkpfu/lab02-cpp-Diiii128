#include <iostream>

using namespace std;

int main () {
    double r, a, b, z, c;

    cout << "Введите радиус r и высоту c\n";
    cout << "r =";
    cin >> r;
    cout << "c =";
    cin >> c;

    cout << "Введите стороны a, b и z\n";
    cout << "a =";
    cin >> a;
    cout << "b =";
    cin >> b;
    cout << "z =";
    cin >> z;


    if (2*r <= a and 2*r <= b and z <= c) {
        cout << "Уместится";
    }
    else {
        cout << "Не уместится";
    }
}