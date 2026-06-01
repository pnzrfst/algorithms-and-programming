// Construa um algoritmo que solicite 5 valores inteiros ao usuário e os armazene
// em um vetor. Após, deverá ser invertido os valores do vetor utilizando um segundo
// vetor.

#include <iostream>

int main() {
    using namespace std;

    int vector[5], vectorRev[5];

    for(int i = 0; i < 5; i++){
        cout << "insira um valor";
        cin >> vector[i];
    }

    for(int i = 0; i < 5; i++){
        vectorRev[i] = vector[4 - i];
    }

    cout << "\n------ Vetor Invertido ------\n";
    for(int i = 0; i < 5; i++){
        cout << "Posicao [" << i << "] = " << vectorRev[i] << '\n';
    }
}