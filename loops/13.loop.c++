//  Faça um algoritmo que leia um conjunto de 20 números inteiros e indique, ao final, qual foi o
// menor valor digitado.

#include <iostream>

int main () {
    using namespace std;

    int menor, maior, aux;
    int menorDigitado;

    for (int i = 1; i <= 20; i++) {

        cout << "Digita um número: ";
        cin >> aux;

        
        if(aux < menor) menor = aux;

        if(aux > maior) maior = aux;

        menorDigitado = menor;
    }


    cout << "Menor valor digitado: " << menorDigitado;
}