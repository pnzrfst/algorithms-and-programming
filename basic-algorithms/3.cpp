// Faça um programa que receba o valor do quilo de um produto e a quantidade de quilos do
// produto consumida calculando o valor final a ser pago.

#include <iostream>

int main () {
    using namespace std;

    float precoKgConsumido, kgConsumido, calculoTotal;

    cout << "Qual o valor do kg do produto: ";
    cin >> precoKgConsumido;

    cout << "Qual o valor consumido do produto: ";
    cin >> kgConsumido;

    calculoTotal = kgConsumido * precoKgConsumido;

    cout << "O valor pago será de: " << calculoTotal;
}