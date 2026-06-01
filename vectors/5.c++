//5-Leia dois vetores A e B com vinte elementos. 
//Construa um terceiro vetor C, onde cada elemento é a subtração do elemento correspondente de A com B.//


#include <iostream> 

int main() {
    using namespace std;

    int vectorA[4];
    int vectorB[4];

    int vectorC[4];

    for(int i = 0; i < 4; i++){
        cout << "\n Digite um valor para o vetor A: ";
        cin >> vectorA[i];
    }

    for(int k = 0; k < 4; k++) {
        cout << "\n Digite um valor para o vetor B: ";
        cin >> vectorB[k];
    }

    cout << "------- Vetor resultante C: ---------";

    for(int j = 0; j < 4; j++) {
        vectorC[j] = vectorA[j] - vectorB[j];
        cout << "\n Posição [" << j << "] com o valor de: " << vectorC[j];
    }
}