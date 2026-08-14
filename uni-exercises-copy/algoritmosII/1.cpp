// Defina uma função que receba usuário do usuário cinco valores e exiba o dobro (x * 2) de cada um deles, usando uma função de multiplicação
#include <iostream>

int doubleValue (int originalValue);


int main () {
    using namespace std;

    int values[5] = {};
    
    for(int i = 0; i < 5; i++){
        cout << "Digite um valor para dobrá-lo" << "\n" ; 
        cin >> values[i];
        
    }

    for(int j = 0; j < 5; j++){
        cout << "O dobro de " << values[j] << "é" << "\n";

        values[j] = doubleValue(values[j]);

        cout << values[j];
    }
    
    return 0;
}

int doubleValue(int originalValue){
    return  originalValue = originalValue * 2;
}