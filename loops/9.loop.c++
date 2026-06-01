// Faça um programa para uma calculadora simples que solicita ao usuário dois operandos como
// entrada, seleciona uma das opções da lista (1- soma, 2- produto, 3- divisão, 4- potência) e exibe
// o resultado. O algoritmo deve executar repetidamente até que os dois operandos informados
// sejam iguais a zero. Utilize uma variável do tipo real para exibir o resultado.
#include <iostream>

int main () {
    using namespace std;
    int option, operando1, operando2;
    float result;

    cout << "Escolha uma operação: (1- soma, 2- produto, 3- divisão, 4- potência)\n";
    cin >> option;

    do{
        cout << "\n Digite o primeiro operando: \n";
        cin >> operando1;

        cout << "Digite o segundo operando: \n";
        cin >> operando2;

        switch (option){
            case 1:
                result = operando1 + operando2;
                cout << "Resultado> \n" << result;
                break;
            case 2:
                result = operando1 * operando2;
                cout << "Resultado> \n" << result;
                break;
            case 3:
                result = operando1 / operando2;
                cout << "Resultado> \n" << result;
                break;
            case 4:
                result = operando1;
                
                if(operando2 == 0){
                    result = 1;
                }

                int i;

                for(i = 1; result < operando2; i++){
                    result= operando1 * result;
                }

                cout << "Resultado> \n" << result;
                
                break;
        }

    }while(operando1 != 0 && operando2 != 0);

    return 0;
}