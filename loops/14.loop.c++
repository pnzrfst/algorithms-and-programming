// Faça um programa que solicita o peso de 25 pessoas e exibe qual o maior peso e qual o menor
// peso dentre os digitados

#include <iostream>

int main () {
    using namespace std;

    float menor, maior, aux;

    for (int i = 1; i <= 3; i++) {

        cout << "Digita um peso: ";
        cin >> aux;

        if(i == 1) {

            maior = aux;
            menor = aux;
            
        }else{

            if(aux < menor) menor = aux;

            if(aux > maior) maior = aux;
        }

    }


    cout << "Menor peso digitado: \n" << menor << '\n';
    cout << "Maior peso digitado: \n" << maior;

}