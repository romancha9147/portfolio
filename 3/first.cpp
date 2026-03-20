#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RUSSIAN");

    int num;
    cout << "Введите число: ";
    cin >> num;
    if (num < 0) {
        cout << "Число отрицательное";
    }
    else if (num > 0) {
        cout << "Число положительное";
    }
    else {
        cout << "Число равно нулю";
    }

    return 0;
}