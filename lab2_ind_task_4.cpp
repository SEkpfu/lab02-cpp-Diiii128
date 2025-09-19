#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    int x, o;
    string s;

    cout << "Введите число змей\n";
    cin >> x;
    o = x % 10;

    if (x >= 5 && x <= 20) {
        s = "змей";
    }
    else {
        if (1 == o) {
            s = "змею";
        }
        if (o >= 2 && o <= 4) {
            s = "змеи";
        }
        if (o > 4 && o <= 9 || o == 0) {
            s = "змей";
        }
    }

    cout << "Мангуст поймал " << x << " " << s;
}