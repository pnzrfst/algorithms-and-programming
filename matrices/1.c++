// Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas
// as posições.

#include <iostream>

int main () {
    using namespace std;
    int matrix[5][5];

    for(int i = 0; i < 5; i++){
        for(int k = 0; k < 5; k++){
            matrix[i][k] = 1;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << "\t" << matrix[i][j];
        }
        cout << "\t\n";
    }
}