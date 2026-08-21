// faça um algoritmo que peça números num vector ate q seja inserido o núm 0. quando apresentado o 0,
// finalizar informando: [1] menor valor, [2] maior valor, [3] média dos valores, [4] mediana dos valores (num do meio)

#include <iostream>
#include <vector>

using namespace std;

int findBiggest(vector <int> v, int tam);
int findLowest(vector <int> v, int tam);
float calcMedia(vector<int> firstVector);

int main(){

    vector<int> vectUser = {};
    bool stopTrigger = false;
    int biggest = {};
    int lowest = {};
    float media = {};
    float mediana = {};

    do{ 
        int userInput = {};

        cout << "Insira um número:  \n";
        cin >> userInput;

        if(userInput == 0) {
            stopTrigger = true;
        }else{
            vectUser.push_back(userInput);
        }

    }while(stopTrigger != true);
    

    biggest = findBiggest(vectUser, vectUser.size());
    lowest = findLowest(vectUser, vectUser.size());
    media = calcMedia(vectUser);

    cout << "MAIOR VALOR>   " << biggest << "\n";
    cout << "\n";
    cout << "MENOR VALOR>  " << lowest << "\n";
    cout << "\n";
    cout << "MEDIA: " << media;
    cout << "\n";
    cout << "MEDIANA: " << mediana;
    cout << "\n";

}


int findBiggest(vector <int> v, int tam){
    int maior = v[0];

    for(int i = 0; i < tam; i++) {

        if(v[i] > maior) {
            maior = v[i];
        }
    }

    return maior;
}

int findLowest(vector <int> v, int tam){
    int menor = v[0];

    for(int i = 0; i < tam; i++) {

        if(v[i] < menor) {
            menor = v[i];
        }
    }

    return menor;
}

float calcMedia(vector <int> userVect) {
    float soma = {};

    for(int i = 0; i < userVect.size(); i++){
        soma += userVect[i];
    };

    float media = soma / userVect.size();

    return media;
}


template <typename T>
void orderVector(vector <T> userVect){
    T aux;

    for(int i = 0; i < userVect.size(); i++){
        for(int j = 0; j < userVect.size(); j++) {
            if(userVect[i] < userVect[j]) {
                aux = userVect[j];
                userVect[j] = userVect[i];
                userVect[i] = aux;
            }

            if(userVect[i] > userVect[j]) {
                aux = userVect[j];
                userVect[j] = userVect[i];
                userVect[i] = aux;
            }
        }
    }
}

float calcMediana(vector <int> userVect) {
    orderVector(userVect);

    int middle = userVect.size() / 2;

    if( middle % 2 == 0) {
        float soma = userVect[middle - 1] + userVect[middle];

        return soma / 2;
    }else {
        return userVect[middle];
    }

}


