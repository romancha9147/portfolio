#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RUSSIAN");
    int side;

    cout << "Введите сторону паралелепипида\n";
    cin >> side;
    cout << "Объем паралелепипида: " << (side*side*side) << endl;
    return 0;
}