//  Declare um vetor de 10 inteiros, leia um valor para cada posição e no final mostre os
// elementos deste vetor em posição inversa ao que foram atribuídos.

#include <iostream>

int main() {
    using namespace std; 

    int vector[5];

    for(int i = 0; i < 5; i++) {
        cout << "Insira um valor para a posição " << i << ':';
        cin >> vector[i];
    }


    cout << " \n --------- Valor trocado ---------- \n";

    for(int k = 4; k >= 0; k--) {
        cout << "\n  ---- Posição [" << k << "]: " << vector[k] << '\n';
    }
}