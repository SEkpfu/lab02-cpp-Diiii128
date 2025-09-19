#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    int a, b, c;

    cout << "Введите три целых числа\n";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << (a < b && a < c) * 1 + (b < c && b < a) * 2 + (c < b && c < a) * 3;

    return 0;
}