#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cout << "Введите стороны треугольника\n";
    cout << "a =";
    cin >> a;

    cout << "b =";
    cin >> b;

    cout << "c =";
    cin >> c;

    if (a < b + c && b < c + a && c < a + b) {
        cout << "Такой треугольник существует";
    }
    else {
        cout << "Такого треугольника не существует";
    }
}