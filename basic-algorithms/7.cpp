// Faça um programa que calcula os gastos com combustível em uma viagem.
// a. O programa deve solicitar ao usuário a distância a ser percorrida em Km, o
// consumo do carro em Km/litro e o preço do litro do combustível.
// b. Como resposta o programa deverá informar qual o valor em R$ a ser gasto com
// combustível na viagem.

#include <iostream>

int main(){
    using namespace std;

    float distancia, consumoLitro, precoCombustivel, calculo;

    cout << "distancia: ";
    cin >> distancia;

    cout << "consumo: ";
    cin >> consumoLitro;

    cout << "precoCombustivel: ";
    cin >> precoCombustivel;

    calculo = (distancia / consumoLitro) * precoCombustivel;

    cout << "O preço é: " << calculo;
}