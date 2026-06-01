// Faça um programa que solicita 20 valores inteiros e exiba quantos são pares e quantos são
// ímpares.


#include <iostream>

int main () {
    using namespace std;

    int contadorPar = 0, contadorImpar = 0, num;

    for (int i = 1; i <= 20; i++) {
        cout << "Digite um numero: ";

        cin >> num;

        if(num % 2 == 0) {
            contadorPar++;
        }else{
            contadorImpar++;
        }
    }

    cout << "Quantidade de pares: " << contadorPar << "\n";
    cout << "Quantidade de impares: " << contadorImpar;
}