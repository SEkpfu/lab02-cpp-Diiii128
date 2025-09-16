#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Введите число\n";
    cout << "a= ";
    cin >> a;
    
    if (a % 2 == 0) {
        cout << "Число четное";
    }
    else{
        cout << "Число нечетное";
    }
}