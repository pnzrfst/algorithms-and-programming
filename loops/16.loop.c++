// Solicite ao usuário a digitação de um número inteiro, calcule e exiba o fatorial deste número

#include <iostream> 

int main () {
    using namespace std;
    int num, fatorial = 1;


    cout << "escolha um numero> ";
    cin >> num;


    if(num == 0 || num == 1) {
        fatorial = 1;
    }

    if(num < 0) {
        cout << "Nao existe fatorial de numero negativo.";
    }

    for (int i = num; i > 1; i--){

        fatorial = fatorial  * i;

        cout << "Fatorial>  " << fatorial << "\n";
    }

}