// Leia o valor do produto e adicione mais 15% de imposto. Escreva o preço final do produto.

#include <iostream>

int main(){
    using namespace std;

    float valorProd;

    cout << "Insira o valor do produto: ";
    cin >> valorProd;

    valorProd = valorProd + (valorProd * 0.15);

    cout << "O valor com imposto é de : " << valorProd;
}