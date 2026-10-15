#include <iostream>
using namespace std;

void inverter(char* palavra) {
    char* inicio = palavra;
    char* fim = palavra;

    while (*fim != '\0') {
        fim++;
    }

    fim--;

    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    char *palavra = new char[50];

    cout << "Digite a string para inverter: " << endl;
    cin >> palavra;

    inverter(palavra);

    cout << "Invertida: " << palavra << "!" << endl;

    delete[] palavra;
}
