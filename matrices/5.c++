//5 - Faça um programa que leia uma matriz 4 x 4 e que logo em seguida realize o 
// somatório de todos elementos contidos na diagonal principal. Exiba o resultado

#include <iostream>

int main(){
    using namespace std;

    int matrix[4][4] = {};
    int somatorio = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "INSIRA UM NUMERO: ";
            cin >> matrix[i][j];
        }
    }


    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                somatorio += matrix[i][j];
            }
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0;j < 4; j++){
            cout << "\t" << matrix[i][j];
        }
        cout << "\t\n";
    }

    cout << "RESULTADO É :" << somatorio;
}