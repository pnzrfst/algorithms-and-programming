// 7. Faça um programa que solicita um número inteiro e exibe uma mensagem indicando se ele é
// positivo, negativo ou zero. Saídas:
// • Pedido ao usuário = "Digite um número inteiro:";
// • Caso ele seja positivo = “Ele é positivo”;
// • Caso ele seja negativo = “Ele é negativo”;
// • Caso ele seja igual a zero = “Ele é igual a zero”


#include <iostream>

int main() {
    using namespace std;

    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    if(num > 0){
        cout << "O número é positivo!";
    }else if(num < 0){
        cout << "O número é negativo!";
    }else{
        cout << "O número é 0.";
    }
}