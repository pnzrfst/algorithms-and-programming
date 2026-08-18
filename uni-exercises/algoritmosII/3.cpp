#include <iostream> 

int acharMaior(int v[], int tam);
void acharMaior(int v[], int tam, int &maior);

int main () {
    using namespace std;
    
    int vector[5] = {};

    for(int i = 0; i < 6; i++) {
        cout << "Insira um número" << "\n";
        cin >> vector[i];
    };

    cout << "ANTES DE CHAMAR A SEGUNDA FUNCAO : " << "\n";
    int maior = acharMaior(vector, 5);
    cout << maior << "\n";

    cout << "DEPOIS DE CHAMAR A SEGUNDA FUNCAO: " << "\n";
    acharMaior(vector, 5, maior);
    cout << maior;

}


int acharMaior(int v[], int tam){
    int maior = v[0];

    for(int i = 0; i < tam; i++) {

        if(v[1] > maior) {
            maior = v[i];
        }
    }

    return maior;
}

void acharMaior(int v[], int tam, int &maior){
    for(int i = 0; i < 6; i++) {
        if(v[i] > maior){
            maior = v[i];
        }
    }
}