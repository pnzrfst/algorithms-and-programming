// 8-Leia 30 valores e jogue os pares em um vetor e os ímpares em outro. 
// Após a leitura calcule o somatório dos dois vetores e exiba o de maior valor.//

#include <iostream>

int main() {
    using namespace std;
    int ori[5], par[5], imp[5];
    int totalP = 0, totalImp = 0, contP = 0, contImp = 0;
    

    for(int i = 0; i < 5; i++){
        cout << "Insira um valor: ";
        cin >> ori[i];

        if(ori[i] % 2 == 0){
            par[contP] = ori[i];
            contP++;
        }else{
            imp[contImp] = ori[i];
            contImp++;
        }
    }

    for(int i = 0; i < contP; i++){
        totalP += par[i];
    }

    for(int i = 0; i < contImp; i++){
        totalImp += imp[i];
    }

    cout << "\n -> Total impares: \n" << totalImp;
    cout << "\n -> Total pares: \n" << totalP; 


    if(contImp > contP) {
        cout << "\n Vencedor foi impar, total: " << contImp;
    }else if(contP > contImp) {
        cout << "\n Vencedor foi par, total: " << contP;
    }else {
        cout << "\n Houve um empate";
    }
}