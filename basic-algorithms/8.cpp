// 8. O sistema de avaliação de determinada disciplina, é composto por três provas. A primeira
// prova tem peso 2, a segunda tem peso 4 e a terceira prova tem peso 6. Faça um programa
// que solicita as notas para o aluno, calcula e exibe a média final deste aluno.

#include <iostream>

int main () {
    using namespace std;

    float not1, not2, not3, notaFinal;

    cout << "Digite sua 1º nota: ";
    cin >> not1;

    cout << "Digite sua 2º nota: ";
    cin >> not2;

    cout << "Digite sua 3º nota: ";
    cin >> not3;

    notaFinal = ((not1 * 2) + (not2 * 4) + (not3 * 6)) / 12;

    cout << "A nota final é: " << notaFinal;
}