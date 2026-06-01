// Faça um programa que leia dois vetores A e B, de tamanho 8, e realize a troca
// dos elementos destes vetores; ou seja, após a execução do programa o vetor B
// deverá conter os valores fornecidos para o vetor A, e vice-versa

#include <iostream>

int main() {
    using namespace std;

    int vectorA[8], vectorB[8];
    int aux;

    for(int i = 0; i < 8; i++){
        cout << "Insira um valor para o vetor A: ";
        cin >> vectorA[i];
    }

    for(int i = 0; i < 8; i++){
        cout << "Insira um valor para o vetor B: ";
        cin >> vectorB[i];
    }

    for(int i = 0; i < 8; i++){
        aux = vectorA[i];
        vectorA[i] = vectorB[i];
        vectorB[i] = aux;
    }

    cout << "\nValores resultantes de A: \n";
    for (int i=0; i< 8; i++){
        cout << "| " << vectorA[i] << " | \n";
    }
    cout << "\nValores resultantes de B: \n";
    for (int i=0; i< 8 ; i++){
        cout << "| " << vectorB[i] << " | \n";
    }
}