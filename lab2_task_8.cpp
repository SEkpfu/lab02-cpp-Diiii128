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

    if (x * x + y * y <= 4){
        cout << "10 очков";
    }
    if (4 < x * x + y * y && x * x + y * y <= 16){
        cout << "5 очков";
    }
    if (x * x + y * y > 16){
        cout << "0 очков";
    }

    return 0;
}