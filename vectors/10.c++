// // Construa um algoritmo que solicite 5 valores ao usuário, armazene estes em um vetor de 5 posições inteiras. 
// Após verifique se o número 7 se encontra no vetor. 
// Em caso positivo, exiba qual a posição em que ele foi encontrado. Se ele for encontrado mais de uma vez também quantas vezes ele foi encontrado.

#include <iostream>

int main (){
    using namespace std;
    int vector[5];
    int contadorSete = 0;

    for(int i = 0; i < 5; i++){
        cout << "Digite um valor: ";
        cin >> vector[i];
    }

    for(int i = 0; i < 5; i++){
        if(vector[i] == 7) {
            cout << "Encontrado: " << vector[i] << " na posição " << i << " do vetor";
            contadorSete++;
        }
    }

    cout << "Foi encontrado 7 tantas vezes: " << contadorSete;
}