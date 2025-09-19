#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    int d, m, y;

    cout << "Введите дату\n";
    cout << "День ";
    cin >> d;

    cout << "Месяц ";
    cin >> m;

    cout << "Год ";
    cin >> y;

    switch (m) {
        case(1): cout << d << " Января " << y; break;
        case(2): cout << d << " Февраля " << y; break;
        case(3): cout << d << " Марта " << y; break;
        case(4): cout << d << " Апреля " << y; break;
        case(5): cout << d << " Мая " << y; break;
        case(6): cout << d << " Июня " << y; break;
        case(7): cout << d << " Июля " << y; break;
        case(8): cout << d << " Августа " << y; break;
        case(9): cout << d << " Сентября " << y; break;
        case(10): cout << d << " Октября " << y; break;
        case(11): cout << d << " Ноября " << y; break;
        case(12): cout << d << " Декабря " << y; break;
    }

}