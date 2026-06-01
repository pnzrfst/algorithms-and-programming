// Declare um vetor de 5 inteiros, leia um valor para cada posição e no final mostre quantos
// elementos possuem valor maior, menor e igual ao primeiro elemento do vetor.

#include <iostream>

int main () {
    using namespace std;

    int vectA[5];
    int maior = 0 , menor = 0 , igual = 0;

    for(int i = 0; i < 5; i++ ){
        cout << "INSIRA UM VALOR ";
        cin >> vectA[i];
    }

    int firstValue = vectA[0];

    for(int i = 1; i < 5; i++ ){
        if(vectA[i] > firstValue){
            maior++;
        }else if(vectA[i] < firstValue){
            menor++;
        }else{
            igual++;
        }
    } 

    cout << "Qtd de maiores: " << maior;
    cout << "Qtd de menores: " << menor;
    cout << "Qtd de iguais: " << igual;
}