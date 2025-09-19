#include <iostream>

using namespace std;

int main(){
    int a;
    if (a >= 0) {
        if (a == 0){
            cout << "Число равно нулю";
        }
        else{
            cout << "Число положительное";
        }
    }
    else {
        cout << "Число отрицательное";
    }
}