// Implemente um programa que:

// Receba do usuário um valor inteiro e crie um vetor de números dinamicamente, usando este valor como seu tamanho.

// Depois peça ao usuário os números para preencher o vetor completo, e gere um segundo vetor dinamicamente contendo só os valores pares.

// Após exibir ambos os vetores (o original e o de pares), libere a memória e reinicie o processo
#include <iostream>
using namespace std;

int main() {
    int size  = {};

    cout << "Insira um valor pro tamanho do vetor! ";
    cin >> size;

    int *randomSizeVector = new int[size];
    int howManyOdd = {};

    for(int i = 0; i < size; i++){
        cout << "Insira um valor: \n";
        cin >> randomSizeVector[i];

        if(randomSizeVector[i] % 2 == 0) {
            howManyOdd++;
        }
    }

    int *oddRandomVector = new int[howManyOdd];
    int actual = 0;

    for(int i = 0; i < size; i++) {
        if(randomSizeVector[i] % 2 == 0) {
            oddRandomVector[actual] = randomSizeVector[i];
            actual++;
        }
    }

    cout << "Vetor preenchido pelo user: \n";
    for(int i = 0; i < size; i++){
        cout << randomSizeVector[i] << '\n';
    }

    cout << "Vetor preenchido pelo user: \n";
    for(int i = 0; i < howManyOdd; i++){
        cout << oddRandomVector[i] << '\n';
    }

    delete [] randomSizeVector;
    delete [] oddRandomVector;
}
