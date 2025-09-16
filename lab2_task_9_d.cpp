#include <iostream>

using namespace std;

int main() {
    setlocale(0,"");

    double x, y;

    cout << "Введите координаты\n";
    cout << "x =";
    cin >> x;

    cout << "y =";
    cin >> y;

    if (x <= 1 and x >= 0 and y >= 0 and y <= 2 and -2.0 * x + 2 <= y) {
        cout << "Принадлежит";
    }
    else{
        cout << "Не принадлежит";
    }
    return 0;
}