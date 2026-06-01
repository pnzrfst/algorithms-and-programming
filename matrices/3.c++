//3 - Faça um programa que solicita ao usuário 25 valores reais e armazene em uma matriz 5x5. 
// A seguir troque todos os elementos da matriz que sejam maiores do que 100 pelo valor zero. Exiba a matriz original e alterada.

#include <iostream>

int main(){
    using namespace std;
    int matrix[5][5] = {};

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << "DIGITE UM VALOR: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\n--- MATRIZ ORIGINAL ---\n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }


    for(int i = 0; i < 5; i++){
       for(int j = 0; j < 5; j++){
            if(matrix[i][j] > 100){
                matrix[i][j] = 0;
            }
        }
    }

    cout << "\n--- MATRIZ ALTERADA ---\n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}
