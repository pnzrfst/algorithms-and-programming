// Faça um programa que solicita ao usuário dois números inteiros e armazena nas variáveis A e
// B.
// a. A seguir (utilizando apenas atribuições entre variáveis) troque os seus
// conteúdos fazendo com que o valor que está em A passe para B e vice-versa.
// b. Ao final escreva os valores que ficaram armazenados nas variáveis A e B
// respectivamente.

#include <iostream>

int main (){
    using namespace std;

    int a, b, c;

    cout << "Escreva A: ";
    cin >> a;

    cout << "Escreva B: ";
    cin >> b;

    c = a;
    a = b;
    b = c; 

    cout << "A: " << a << "\n" << "B :" << b;

}