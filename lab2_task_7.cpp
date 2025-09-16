#include <iostream>

using namespace std;

int main() {
    setlocale(0,"");
    double a, b; 
    char s;

    cout << "Введите два числа\n";
    cout << "a =";
    cin >> a;

    cout << "b =";
    cin >> b;

    cout << "Введите знак арифметической операции\n";
    cin >> s;

    switch ( s ){
            case '+':
                cout << a + b; break;
            case '-':
                cout << a - b; break;
            case '*':
                cout << a * b; break;
    }

    return 0;
}