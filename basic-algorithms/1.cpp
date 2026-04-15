// Faça um programa que receba um valor que é o valor pago, um segundo valor que é o preço
// do produto e retorne o troco a ser dado.

#include <iostream>

int main () {
    using namespace std;

    float valorPago, valorPreco, calculoTotal;
    
    cout << "Qual o valor pago: ";
    cin >> valorPago;

    cout << "Qual o valor do produto: ";
    cin >> valorPreco;

    calculoTotal = valorPago - valorPreco;

    cout << "O troco será de: R$" << calculoTotal;
}