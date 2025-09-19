#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    int a, b, c;

    cout << "Введите три целых числа\n";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << (a > 10) * a + (b > 10) * b + (c > 10) * c;

    return 0;
}