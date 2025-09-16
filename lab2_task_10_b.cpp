#include <iostream>
#include <cmath>

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
        cout << "Такой треугольник существует\n";
        if (a == b || a == c || c == b) {
            if (a == b == c) {
                cout << "Он равносторонний\n";
            }
            else {
                cout << "Он равнобедренный\n";
            }
        }
        if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(b, 2) + pow(a, 2)) {
            cout << "Он прямоугольный";
        }
    }
    else {
        cout << "Такого треугольника не существует";
    }
}