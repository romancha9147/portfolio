#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RUSSIAN");
    
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8 , 9, 10};
    int sum = 0;
    int i = 0;

    do {
        sum += arr[i];
        cout << "Ёлемент массива: " << arr[i] << endl;
        i++;
    } while (sum < 32 && i < 10);

    cout << "—умма элементов: " << sum << endl;
    return 0;
}