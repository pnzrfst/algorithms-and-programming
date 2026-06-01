// Declare um vetor de 10 inteiros, leia um valor para cada posição e no final
// mostre o calculo do fatorial do maior e do menor.

#include <iostream>

int main() {
    using namespace std;
    int maior = 0, menor = 0;
    int resultMaior = 1, resultMenor = 1;

    int vector[5];


    cout << "Escolha um numero: ";
    cin >> vector[0];

    maior = vector[0];
    menor = vector[0];

    for(int i = 1; i < 5; i++){
        cout << "Escolha um numero: ";
        cin >> vector[i];

        if(vector[i] > maior){
            maior = vector[i];
        }

        if(vector[i] < menor){
            menor = vector[i];
        }
    }


    for(int i = 1; i <= maior; i++){
        resultMaior *= i;
    }

    for(int i = 1; i <= menor; i++){
        resultMenor *= i;
    }


    cout << "Resultado do fatorial do maior:" << resultMaior << '\n';
    cout << "Resultado do fatorial do menor:" << resultMenor << '\n';
}