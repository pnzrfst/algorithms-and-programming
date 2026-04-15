// Faça um programa que solicita ao usuário uma letra e verifique se ela é uma vogal ou não
// exibindo uma mensagem correspondente. Saídas
// • Pedido ao usuário= "Digite uma letra:";
// • Caso verdadeiro = “É uma vogal”;
// • Caso falso = “Não é uma vogal”
#include <iostream>

int main() {
    using namespace std;

    char letraUser;

    cout << "Digite uma letra: ";
    cin >> letraUser;

    if(letraUser == 'A' || letraUser == 'a' || letraUser || letraUser == 'E' || letraUser == 'e' || letraUser == 'I' || letraUser == 'i' || letraUser == 'O' || letraUser == 'o' || letraUser == 'U' || letraUser == 'u'){
        cout << "é uma vogal: " << letraUser;
    }else{
        cout << "não é uma vogal!";
    }
}