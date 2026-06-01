// Faça um programa que solicita ao usuário uma quantidade indeterminada de números inteiros.
// O programa deve calcular e escrever a média aritmética apenas dos números pares. A entrada
// de dados deve ser encerrada quando o número 0 (ZERO) for digitado.

#include <iostream>

int main() {
    using namespace std;

    int num;
    int contadorPar = 0;
    int soma = 0;
    
    do{
        cout << "Digite um numero > "; 
        cin >> num;

        if(num % 2 == 0 && num != 0){
            soma = soma + num;
            contadorPar++;
        }

    } while (num != 0);

    cout << "soma: " << soma << '\n';
    cout << "contadorpar: " << contadorPar << '\n';
    cout << "A média aritmetica é: " << soma / contadorPar;
}