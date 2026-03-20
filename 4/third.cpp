#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RUSSIAN");
    int m, n;

    cout<< "Введите количество строк матрицы:";
    cin>>m;
    cout<< "Введите количество столбцов матрицы:";
    cin>>n;
    
    float** matrix = new float*[m];
    for (int i = 0; i < m; i++){
        matrix[i] = new float[n];
    }

    float* avg = new float[m];

    cout<<"Введите элементы матрицы: ";
    for (int i = 0; i < m; i++){
        float summ=0;
        for (int j = 0; i < n; j++){
            cin >> matrix[i][j];
            summ += matrix[i][j];
        }
        avg[i] = summ/n;
    }

    cout<<"Массив из средних арифметических значений строк:\n";
    for (int i = 0; i<m;i++){
        cout<<avg[i]<<" ";

    }
    return 0;
}