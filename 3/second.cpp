#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RUSSIAN");

    int sum = 0;
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
        cout << "Ёлемент массива: " << arr[i] << endl;
    }
    cout << "—умма элементов массива: "<< sum;

    return 0;
}