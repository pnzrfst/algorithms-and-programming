// Faça um programa que solicita a data de nascimento de uma pessoa e a data atual e exiba a
// idade desta pessoa em anos (A data deve ser armazenada em 3 variáveis inteiras para ano,
// mês e dia).
#include <iostream>

int main() {
    using namespace std;

    int diaNasc, mesNasc, anoNasc;
    int diaAtual, mesAtual, anoAtual;

    cout << "Digite o dia do seu nascimento: ";
    cin >> diaNasc;

    cout << "Digite o mes do seu nascimento: ";
    cin >> mesNasc;

    cout << "Digite o ano do seu nascimento: ";
    cin >> anoNasc;

    cout << "Digite que dia é hoje: ";
    cin >> diaAtual;

    cout << "Digite que mes é hoje: ";
    cin >> mesAtual;

    cout << "Digite o ano atual: ";
    cin >> anoAtual;

    //se for o aniversário, faz anoNasc - anoAtual
    if(mesNasc < mesAtual || mesNasc == mesAtual && diaNasc <= diaAtual){
        int idade = anoAtual - anoNasc;
        cout << "Sua idade é: " << idade;

        return 0;
    }else {
        int idade = (anoAtual - anoNasc) - 1;
        cout << "Sua idade é: " << idade;
        return 0;
    }
}