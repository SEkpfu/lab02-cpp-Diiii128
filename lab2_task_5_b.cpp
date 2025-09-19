#include <iostream>

using namespace std;

int main () {
    double x, y, z, a, b;
    int xy, yz, xz;

    cout << "Введите стороны x, y, z\n";
    cout << "x =";
    cin >> x;
    cout << "y =";
    cin >> y;
    cout << "z =";
    cin >> z;

    cout << "Введите стороны a, b\n";
    cout << "a =";
    cin >> a;
    cout << "b =";
    cin >> b;

    xy = (x <= a and y <= b) or (x <= b and y <= a);
    yz = (y <= a and z <= b) or (y <= b and z <= a);
    xz = (x <= a and z <= b) or (x <= b and z <= a);

    if (xy or yz or xz) {
        cout << "Пройдет";
    }
    else {
        cout << "Не пройдет";
    }

}