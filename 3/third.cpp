#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RUSSIAN");

    int input;
    cout << "Введите номер команды ";
    cin >> input;
    
    switch (input) {
    case 1:
        cout << "Команда зеленых";
        break;
    case 2:
        cout << "Команда красных";
        break;
    case 3:
        cout << "Команда синих";
        break;
    case 4:
        cout << "Команда желтых";
        break;
    default:
        cout << "Нет такой команды";
        break;
    }

    return 0;
}