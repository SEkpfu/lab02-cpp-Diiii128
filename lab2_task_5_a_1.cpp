#include <iostream>

using namespace std;

int main () {
    double r, a, b;

    cout << "Введите радиус r\n";
    cout << "r =";
    cin >> r;

    cout << "Введите стороны a и b\n";
    cout << "a =";
    cin >> a;
    cout << "b =";
    cin >> b;


    if (2*r <= a and 2*r <= b) {
        cout << "Уместится";
    }
    else {
        cout << "Не уместится";
    }
}