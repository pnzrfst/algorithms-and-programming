// Faça um programa que solicita ao usuário dois números inteiros. O primeiro é o valor das
// horas e o segundo dos minutos. Verifique se a hora é válida e exiba uma mensagem
// correspondente (considere a hora 24:00 como inválida). Saídas:
// • Pedido para horas = "Entre com um número para as horas: ";
// • Pedido para os minutos = "Entre com um número para os minutos:";
// • Caso verdadeiro = “A hora é válida”;
// • Caso falso = ”A hora é inválida”.

#include <iostream>

int main () {
    using namespace std;
    
    int nHoras; 
    int nMinutos;

    cout << "Entre com um número para horas: ";
    cin >> nHoras;

    cout << "Entre com um número para os minutos: ";
    cin >> nMinutos;

    if(nHoras >= 1 && nHoras <= 24 && nMinutos >= 1 && nMinutos <= 59){
        cout << "Hora válida!";
        return 0;
    }else {
        cout << "Hora inválida!";
        return 0;
    }
}