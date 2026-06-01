#include <iostream>
using namespace std;
int main() {
    int vector[10];
    int maior, menor;
    float soma, media;

    for(int i = 0; i < 10; i++){
        cout << "Digite o número da posição ---> ";
        cin >> vector[i];
        soma += vector[i];
    }


    menor = vector[0];
    maior = vector[0];
    soma = vector[0];
    media = vector[0];

    for(int i = 1; i < 10; i++){

        if(vector[i] < menor){
            menor = vector[i];
        }

        if(vector[i] > maior) {
            maior = vector[i];
        }

        soma += vector[i];
    }


    
    cout << "Maior número --> " << maior;
    cout << "\n";
    cout << "Menor número --> " << menor;
    cout << "\n";

    cout << "Soma: " << soma << "\n";
    cout << "Média: " << media << "\n"; 
}