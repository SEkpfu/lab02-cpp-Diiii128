#include <iostream>

using namespace std;

int main() {
    setlocale(0, "");
    int dd, dm, dy, cd, cm, cy, yo;

    cout << "Введите дату Вашего рождения\n";
    cout << "День ";
    cin >> dd;

    cout << "Месяц";
    cin >> dm;

    cout << "Год ";
    cin >> dy;

    cout << "Введите текущую дату\n";
    cout << "День ";
    cin >> dd;

    cout << "Месяц";
    cin >> dm;

    cout << "Год ";
    cin >> dy;

    if (dm > cm) {
        yo = cy - dy;
    }
    else {
        if (dd < cd and dm == cm) {
            yo = cy - dy - 1;
        }
        else {
            yo = cy - dy;}
    }

    if (yo % 10 == 1 && (yo < 11 || yo > 20)) {
        cout << "Вам " << yo << " год";
    }
    else {
        if ((yo % 10 == 2 || yo % 10 == 3 || yo % 10 == 4)  && (yo < 11 || yo > 14)) {
            cout << "Вам " << yo << " года";
        }
        else {
            cout << "Вам " << yo << " лет";
        }
    }

}