//  Faça um programa que solicita ao usuário o valor de N e calcule o valor de S na série S = 1/1 +
// 1/2 + 1/3 + ... + 1/N. Ao fim exiba o número real resultante da série

#include <iostream>

int main () {
    using namespace std;

    float N;
    float valorS = 0.00;
    cout << "Informe o valor de N: ";
    cin >> N; 

    for (int i = 1; i <= N; i++) {
        valorS = valorS + 1.0 / i;
    }

    cout << "Valor da série S: " << valorS;
}