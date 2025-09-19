#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    int a, b, c;

    cout << "Введите три целых числа\n";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << (a % 2 == 0) + (b % 2 == 0) + (c % 2 == 0);

    return 0;
}