//  Faça um programa que solicita a idade de 10 pessoas e exiba a quantidade de pessoas que
// possui idade maior ou igual a 18 anos.

#include <iostream>

int main() {
    using namespace std;
    int contadorMaiorQueDezoito = 0, idade;
    
    for(int i = 1; i <= 10; i++) {
        cout << "Insira sua idade: ";
        cin >> idade;

        if(idade >= 18) contadorMaiorQueDezoito++;
    }

    cout << "Qtd de pessoas maiores ou que possuem 18 anos: " << contadorMaiorQueDezoito;
}