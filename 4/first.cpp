#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RUSSIAN");
    const int n = 5;
    int matrix[n][n];
    long long product = 1;

    cout << "Введите элементы матрицы 5х5: ";
    for (int i = 0; i< n; i ++) {
        for (int j = 0; j< n; j++){
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        product *= matrix [i][n - 1 - i];
    }

    cout << "Произведение элементов побочной диагонали: " << product << endl;

    return 0;
}