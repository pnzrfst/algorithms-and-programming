// Faça um programa que solicita ao usuário dois valores inteiros e positivos que serão a base e o
// expoente. O programa deve usar laço de repetição para calcular e escrever o resultado da base
// elevado ao expoente (potencia)

#include <iostream>

int main () {
    using namespace std;

    int base, expoente, potencia;

    cout << "Escolha a base: " << '\n';
    cin >> base;

    cout << "Escolha o expoente: " << '\n';
    cin >> expoente;

    potencia = base;
    int intervalo = 1;

    if(expoente == 0) potencia = 1;

    while(intervalo < expoente){
        potencia = base * potencia;
        intervalo++;
    }

    cout << "O resultado é: " << potencia; 
}