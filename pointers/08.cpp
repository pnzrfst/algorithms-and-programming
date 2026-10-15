#include <iostream>

using namespace std;
//ir fazendo a sequencia até achar o elemento passado pelo user;


int main () {
    int i = 0;
    int user_input = {};
    int fibonacci_counter = {};

    cout << "Insira um número que deseja saber a sequencia de fibonacci : \n";
    cin >> user_input;

    while (user_input < 0) {
        cout << "Insira um valor entre 0 e 1: ";
        cin >> user_input;
    }

    for(int i = 1; i < user_input; i++) {
        if(i == user_input){
            return fibonacci_counter;
        }

        fibonacci_counter =  i + (i - 1) + (i + 1);

        cout << "Número antecessor: " << i - 1 << "\n";
        cout << "Próximo numero: " << i + 1 << "\n";
    }

    cout << "A soma dos números é: " << fibonacci_counter;

}
