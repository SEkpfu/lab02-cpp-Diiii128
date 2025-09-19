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

    if (y <= 1 and y >= 0 and x >= -2 and x <= 0) {
        cout << "Принадлежит";
    }
    else{
        cout << "Не принадлежит";
    }
    return 0;
}