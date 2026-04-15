//Faça um programa que solicita ao usuário um número inteiro e exibe este na tela. Se o
//número for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo.
#include <iostream>

int main() {
    using namespace std;
    int numeroUser;

    cout << "digite o número: ";
    cin >> numeroUser;

    if(numeroUser < 0) {
        int numeroConvertido = numeroUser * -1;
        cout << "número convertido: " << numeroConvertido;
    }
    
    cout << "número selecionado: " << numeroUser;
    
} 