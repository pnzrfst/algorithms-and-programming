// crie um template de uma funcao que inverta um vector
// crie um template de uma funcao que ordene um vector 
#include <iostream>


template <typename T, typename U> 
void invertVector(T tam, U items[]){
    for(int i = 0; i < tam/2; i++){
        U aux = items[i];
        items[i] = items[tam - i - 1];
        items[tam - i - 1] = aux;
    }
}

template <typename T, typename U>
void orderVector(T tam, U items[]){
    U aux;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++) {
            if(items[i] < items[j]) {
                aux = items[j];
                items[j] = items[i];
                items[i] = aux;
            }

            if(items[i] > items[j]) {
                aux = items[j];
                items[j] = items[i];
                items[i] = aux;
            }
        }
    }
}

int main () {
    using namespace std;
    int items[5] = {1,2,3,4,5};
    int orderItems[5] = {10, 20, 30, 40, 50};


    cout << "ANTES DE INVERTER: " << "\n";

    for(int i = 0; i < 5; i++){
        cout << items[i] << "\n";
    }

    invertVector(5, items);


    cout << "DEPOIS DE INVERTER: " << "\n";

    for(int i = 0; i < 5; i++){
        cout << items[i] << "\n";
    }


    cout << "ANTES DE ORDENAR: " << "\n";

    for(int i = 0; i < 5; i++){
        cout << orderItems[i] << "\n";
    }

    orderVector(5, orderItems);

    cout << "DEPOIS DE ORDENAR: " << "\n";

    for(int i = 0; i < 5; i++){
        cout << orderItems[i] << "\n";
    }

}

