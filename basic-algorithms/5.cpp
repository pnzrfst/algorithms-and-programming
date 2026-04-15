// Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
// cavalos comprados para um haras.

#include <iostream>

int main () {
    using namespace std;

    int qtdCavalos, calculoFerradura;

    cout << "Quantos cavalos há no aras? ";
    cin >> qtdCavalos;

    calculoFerradura = qtdCavalos * 4;

    cout << "O nº de ferraduras necessário será de: " << calculoFerradura;
}