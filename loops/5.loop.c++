//Faça um programa que exiba na tela a soma dos números inteiros do intervalo [100, 200].
//Exemplo: soma = 100 + 101 +102 + ... + 200

#include <iostream>

int main () {
    using namespace std;

    int num1 = 0;
    int num2 = 0;

    for(int i = 100; i <= 200; i++){
        num1 = i;
        num2 = i + 1;

        cout << "A soma é :" << num1 + num2 << '\n';
    }
}