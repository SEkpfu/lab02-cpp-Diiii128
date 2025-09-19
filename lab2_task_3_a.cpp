#include <iostream>

using namespace std;

int main(){
    double x;
    cout << "Введите х\n";
    cout << "x = ";
    cin >> x;

    if (x <= -2) {
        cout << "f(x) = " << 0;
    }
    else {
        if (x > 10) {
            cout << "f(x) = " << 1.0 / (x*x + 4.0 * x - 5.0);
        }
        else {
            cout << "f(x) = " << x*x + 4.0 * x + 5;
        }
    }
}