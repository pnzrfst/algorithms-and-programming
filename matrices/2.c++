//2 - Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas as posições em que o índice de linha tem valor igual ao da coluna.

#include <iostream>

int main(){
    using namespace std;

    int matrix[5][5] = {};

    for (int i = 0; i < 5; i++){
        matrix[i][i] = 1;
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0;j < 5; j++){
            cout << "\t" << matrix[i][j];
        }
        cout << "\t\n";
    }

}