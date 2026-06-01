//  Faça um programa que gere e exiba os 20 primeiros termos da série de Fibonacci (Os dois
// primeiros termos da série são 1 e 1, os termos subsequentes são a soma dos dois últimos.
// Observe o exemplo: 1,1,2,3,5,8,13,21,..)

#include <iostream>

int main () {
    using namespace std;
    int primeiro = 1, segundo = 1;

    for(int i = 1; i <= 20; i++){

        cout << primeiro << " - " << segundo << " - ";

        primeiro = primeiro + segundo;
        segundo = primeiro + segundo;  


    }
}