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

    if (x * x + y * y <= 36 and x * x + y * y >= 9) {
        cout << "Принадлежит";
    }
    else{
        cout << "Не принадлежит";
    }
    return 0;
}