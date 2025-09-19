#include <iostream>

using namespace std;

int main() {
    setlocale (0, "");
    double x, y;

    cout << "Введите координаты\n";
    cout << "x =";
    cin >> x;

    cout << "y =";
    cin >> y;

    if (x <= 0) {
        if ((y >= 0 && y <= 2.0 * x + 6.0) || (y < 0 && y >= -2.0 * x - 6)) {
            cout << "Точка попала в область";
        }
        else {
            cout << "Точка не попала в область";
        }
    }
    else {
        if ((y >= 0 && x * x + y * y <= 36) || (y < 0 && y > x - 6)) {

            cout << "Точка попала в область";
        }
        else {
            cout << "Точка не попала в область";
        }
    }

}