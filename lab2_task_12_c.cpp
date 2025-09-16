#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    int a, b, c;

    cout << "Введите три целых числа\n";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << ((a < b && b < c) || (c < b && b < a)) * b + ((b < a && a < c) || (c < a && a < b)) * a + ((b < c && c < a) || (a < c && c < b)) * c << endl;

    return 0;
}