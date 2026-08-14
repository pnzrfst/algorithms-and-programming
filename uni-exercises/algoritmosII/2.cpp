#include <iostream>



int doubleMatrix (int matrixToDouble[3][3], int row, int col);
void showMatrix(int matrix[3][3]);


int main() {
    using namespace std;
    int matrix[3][3] = {};


    for(int i = 0; i < 3; i++) {
        for(int k = 0; k < 3; k++) {
            cout << "Digite um valor para" << "[" << i+1 << "][" << k+1 << "]";
            cin >> matrix[i][k];
        }
    }

    showMatrix(matrix);    

}

void showMatrix(int matrix[3][3]) {
    
    using namespace std;

    cout << "\n ----- ANTES DE MULTIPLICAR -----\n";

    for (int i = 0; i < 3; i++){
        for (int k = 0; k < 3; k++){
            cout << "\t" << matrix[i][k];
        }
        cout << "\t\n";
    }

    cout << "\n ----- DEPOIS DE MULTIPLICAR -----\n";


    for (int i = 0; i < 3; i++){
        for (int k = 0; k < 3; k++){
            matrix[i][k] = doubleMatrix(matrix, i, k);
            cout << "\t" << matrix[i][k];
        }
        cout << "\t\n";
    }
}

int doubleMatrix(int matrixToDouble[3][3], int row, int col){
    return matrixToDouble[row][col] *= 2;
}