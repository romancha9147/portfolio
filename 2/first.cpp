#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int side;
    cout << "¬ведите сорону квадрата\n";
    cin >> side;
    cout << "ѕлощадь квадрата равна:"<<(side * side) << endl;
    return 0;
}