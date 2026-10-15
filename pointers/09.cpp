#include <iostream>
#include <cstdlib>
using namespace std;

int** create_matrix(int matrix_size);
void fillMatrix(int row, int col, int** matrix, int matrix_size);
void showMatrix(int** matrix, int matrix_size);

int main () {
    int matrix_size = {};

    cout << "Insira o tamanho da matriz que você deseja: \n";
    cin >> matrix_size;

    int** point = create_matrix(matrix_size);

    int row; int col;

    cout << "Insira as coordenadas que deseja trocar o valor: (linha): \n";
    cin >> row;

    cout << "Insira as coordenadas que deseja trocar o valor (coluna): \n";
    cin >> col;

    cout << "Antes de zerar: \n";
    showMatrix(point, matrix_size);

    fillMatrix(row, col, point, matrix_size);

    cout << "Depois de zerar: \n";
    showMatrix(point, matrix_size);

}

void fillMatrix(int row, int col, int** matrix, int matrix_size) {
    if(row < 0  || row >= matrix_size || col < 0 || col >= matrix_size) return;

    if(matrix[row][col] == 0) return;

    matrix[row][col] = 0;

    fillMatrix(row - 1, col, matrix, matrix_size);
    fillMatrix(row + 1, col, matrix, matrix_size);
    fillMatrix(row, col - 1, matrix, matrix_size);
    fillMatrix(row, col + 1, matrix, matrix_size);
}

void showMatrix(int **matrix, int matrix_size) {
     for (int i = 0; i < matrix_size; i++){
        for (int k = 0; k < matrix_size; k++){
            cout << "\t" << matrix[i][k];
        }
        cout << "\n";
    }
}

int** create_matrix(int matrix_size) {
    int** matrix = new int*[matrix_size];

    for(int i = 0; i < matrix_size; i++) {
        matrix[i] = new int[matrix_size];
    }


    for(int i = 0; i < matrix_size; i++) {
        for(int j = 0; j < matrix_size; j++) {
            matrix[i][j] = rand() % 2;
        }
    }

    return matrix;
}
