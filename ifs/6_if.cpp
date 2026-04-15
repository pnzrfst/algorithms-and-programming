// 6. Faça um programa que exiba o maior dentre dois números reais digitados pelo usuário. Caso
// eles sejam iguais exiba uma mensagem correspondente. Saídas:
// • Pedido ao usuário = "Digite dois números reais:";
// • Caso eles sejam iguais = “Eles são iguais”.
// • Caso sejam diferentes exiba somente o numero desejado.

#include <iostream>

int main() {
    using namespace std;

    float num1, num2;

    cout << "Digite o número 1: ";
    cin >> num1;

    cout << "Digite o número 2: ";
    cin >> num2;


    if(num1 == num2){
        cout << "Os números " << num1 << 'e' << num2 << "são iguais." ;
    }else{
        int selectedNum;

        cout << "Selecione qual número deseja ver: (0) - Primeiro (1) - Segundo ";
        cin >> selectedNum;

        switch(selectedNum){
            case 0: 
                cout << "\n" << num1;
                return 0;
            case 1:
                cout << "\n" << num2;
                return 0;
            default:
                cout << "Escolha entre 0 ou 1!!!";
                return 0;
        }
    }
}