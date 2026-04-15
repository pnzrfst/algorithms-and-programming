// Faça um programa que solicita ao usuário um valor inteiro e exibe uma mensagem informando
// se o número é par ou ímpar. Saídas:
// • Pedido ao usuário = "Entre com um numero inteiro:";
// • Caso verdadeiro = “O número é par”;
// • Caso falso = “O número é ímpar”.
#include <iostream>

int main () {
    using namespace std;

    int numeroUser;

    cout << "digite um número: ";
    cin >> numeroUser;
    
    if(numeroUser % 2 == 0){
        cout << "O número é par";
    }else{
        cout << "O número é ímpar";
    }
}