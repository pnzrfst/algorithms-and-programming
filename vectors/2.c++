// Calcule a média das notas de 10 alunos de uma disciplina e determine o número de alunos
// que tiveram nota superior a média calculada.
#include <iostream>

int main () {
    using namespace std;
    float notes[5];

    int acimaMedia = 0;
    float soma = 0;
    float media;
    
    for(int i = 0; i < 5; i++){
        cout << "Digite a nota: ";
        cin >> notes[i];

        soma += notes[i];
    }

    media = soma / 10;

    for(int i = 0; i < 5; i++) {
        if(notes[i] > media) acimaMedia++;
    }

    cout << "Média geral: " << media  << "\n";
    cout << "Quantidade de alunos com acima da media: " << acimaMedia;
    
}