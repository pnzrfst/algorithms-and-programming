// Faça um programa que exiba na tela a tabuada do número 5 no seguinte formato: 5X1=5;
// 5X2=10; 5X3=15; ... ; 5X10=50

#include <iostream>

int main() {
    using namespace std;

    int numerador = 5;

    for(int i = 0; i <= 10; i++){
        cout << numerador << 'X' << i << '=' << numerador * i << '\n';
    }
}