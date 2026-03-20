#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RUSSIAN");

    const int n = 6;
    int matrix[n][n]; int temp;
    cout << "Введите элементы матрицы 6x6:";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
        cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n / 2; i++) { 
        for (int j = 0; j < n; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[n - 1 - i][j];
            matrix[n - 1 - i][j] = temp;
        }
    }
    cout << "Матрица после перестановки строк:" << endl; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}