#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RUSSIAN");

    int speed;
    int time;

    std::cout << "Введите скорость (в км/ч)\n";
    std::cin >> speed;
    std::cout << "Введите время (в часах)\n";
    std::cin >> time;
    std::cout << "Пройденное расстояние: " << speed * time << " км";

    return 0;
}