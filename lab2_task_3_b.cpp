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
        if (x > 0) {
            if (x*x + 4.0*x - 5.0 == 0){
                cout << "Ошибка: делить на 0 нельзя";}
            else {
            cout << "f(x) = " << 1.0 / (x*x + 4.0 * x - 5.0);}
        }
        else {
            cout << "f(x) = " << x*x + 4.0 * x + 5;
         }
     }
    }