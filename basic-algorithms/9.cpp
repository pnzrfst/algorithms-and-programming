// 9. João recebeu seu salário S1 (em reais) e precisa pagar duas contas (C1 e C2) que estão
// atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada
// conta. Faça um algoritmo que calcule e mostre quanto restará do salário do João.

#include <iostream>

int main() {
    using namespace std;

    float s1, c1, c2;

    float calculo;

    cout << "Digite seu salario: ";
    cin >> s1;

    cout << "Digite o valor da primeira conta: ";
    cin >> c1;

    cout << "Digite o valor da segunda conta: ";
    cin >> c2;

    calculo = s1 -(c1 + (c1 * 0.02) + c2 + (c2 * 0.02));

    cout << "Restará do salário do João: " << "R$" << calculo;
}