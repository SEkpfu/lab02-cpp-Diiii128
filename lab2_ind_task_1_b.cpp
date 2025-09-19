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
        case(1): cout << d << " Января " << y << endl << "Зима"; break;
        case(2): cout << d << " Февраля " << y << endl << "Зима"; break;
        case(3): cout << d << " Марта " << y << endl << "Весна"; break;
        case(4): cout << d << " Апреля " << y << endl << "Весна"; break;
        case(5): cout << d << " Мая " << y << endl << "Весна"; break;
        case(6): cout << d << " Июня " << y << endl << "Лето"; break;
        case(7): cout << d << " Июля " << y << endl << "Лето"; break;
        case(8): cout << d << " Августа " << y << endl << "Лето"; break;
        case(9): cout << d << " Сентября " << y << endl << "Осень"; break;
        case(10): cout << d << " Октября " << y << endl << "Осень"; break;
        case(11): cout << d << " Ноября " << y << endl << "Осень"; break;
        case(12): cout << d << " Декабря " << y << endl << "Зима"; break;
    }

}