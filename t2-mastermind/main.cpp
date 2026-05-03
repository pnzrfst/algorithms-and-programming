
#include <iostream>
using namespace std;
#include <time.h>
#include<stdlib.h>

int main() {
    int option = -1;

   while(option != 2) {
        cout << " \n Insira uma opção: (0 - Jogar, 1 - Sobre, 2 - Sair) \n";
        cin >> option;
        switch (option){
            case 0: {
                cout << "Você selecionou a opção jogar!";

                cout << "Começando o jogo, irei sortear uma sequencia de números aleatórios...";

                srand(time(NULL));
                
                int n1, n2, n3, n4;


                n1 =  0 + rand()%10;
                n2 = 0 + rand()%10;
                n3 =  0 + rand()%10;
                n4 =  0 + rand()%10;

                // cout << "\n --------> (fora de todos os ifs) Números gerados!: " << n1 << n2 << n3 << n4;

                //geramos o gerenciador de estado pro nosso while, esta variável irá guardar o valor bool dessa comparação lógica;
                bool isEqual = n1 == n2 || n2 == n4 || n1 == n3 || n3 == n4 || n2 == n3 || n1 == n4;

                //enquanto os numeros forem maior que seis ou menor/igual à zero ou isEqual for true >  
                while(isEqual || n1 > 6 || n1 <= 0 || n2 > 6 || n2 <= 0|| n3 > 6 || n3 <= 0|| n4 > 6 || n4 <= 0){
                    // cout << "\n (1) - Gerou maior que 6, re-gerando! \n";

                    n1 = 0 + rand()%10;
                    n2 = 0 + rand()%10;
                    n3 = 0 + rand()%10;
                    n4 = 0 + rand()%10;

                    // cout << "\n (1) - (dentro do primeiro if de maior que 6) Numeros gerados!: \n" << n1 << n2 << n3 << n4;

                    //aqui, atualizamos nossa variável lógica dentro do loop, para termos essa comparação iterada a cada execução do loop
                    isEqual = n1 == n2 || n2 == n4 || n1 == n3 || n3 == n4 || n2 == n3 || n1 == n4;

                    //se isso for true, então geramos números aleatórios maiores que 0 e menores/iguais à zero e não repetidos.
                    if (!isEqual && n1 <= 6 && n1 > 0 && n2 <= 6 && n2 > 0 && n3 <= 6 && n3 > 0 && n4 <= 6 && n4 > 0) break;
                }

                cout << "\n Numeros gerados!: " << n1 << n2 << n3 << n4 << "\n";
                
                int attempts = 1;
                bool won = false;

                do {
                    cout << "\n Numeros gerados!: " << n1 << n2 << n3 << n4 << "\n";

                    int selectedNumber = 0;
                    int correctCounter = 0;
                    int incorrectCounter = 0;
                    
                    //ajustar bug de numeros mto grandes, nosso código atual entre em loop infinito se digitarmos um número maior que 11..
                    do {
                        cout << "\n Digite seu palpite (4 números): ";
                        cin >> selectedNumber;

                        if(selectedNumber < 0 || selectedNumber == 0000 || selectedNumber > 6666) {
                            cout << "\n Palpite inválido. Tente de novo.";
                        }

                    }while( selectedNumber < 0 || selectedNumber == 0 || selectedNumber == 0000 || selectedNumber > 6666);

                    //separando os valores do input do user;
                    int first = 0, second = 0, third = 0, fourth = 0;

                    first = selectedNumber / 1000;
                    cout << "\n Primeiro valor: " << first;


                    second = (selectedNumber / 100) % 10;
                    cout << "\n Segundo valor: " << second;

                    
                    third = (selectedNumber / 10) % 10;
                    cout << "\n Terceiro valor: " << third;


                    fourth = selectedNumber % 10;
                    cout << "\n Quarto valor: " << fourth;


                    bool isCorrect = n1 == first && n2 == second && n3 == third && n4 == fourth;

                    

                    if(isCorrect) {
                        cout << "\n Você ganhou! Parabéns, você acertou com " << attempts << " tentativa(s).";
                        won = true;
                        break;
                    }


                    //verificamos se o número gerado na posição x é igual ao número gerado na posição y.
                    if(n1 == first) correctCounter++;
                    if (n2 == second) correctCounter++;
                    if (n3 == third) correctCounter++;
                    if(n4 == fourth) correctCounter++;


                    // verificamos se o numero existe na sequencia, para adicionarmos ao contador de existe, mas nao esta correto.
                    if(first == n2 || first == n3 || first == n4) incorrectCounter++;
                    if (second == n1 || second == n3 || second == n4) incorrectCounter++;
                    if (third == n1 || third == n2 || third == n4) incorrectCounter++;
                    if (fourth == n1 || fourth == n2 || fourth == n3) incorrectCounter++;
                
                    
                    cout << "\n Você acertou " << correctCounter << " número(s) que existe(m) e estão na posição correta.";
                    cout << "\n Você digitou " << incorrectCounter << " número(s) que existe(m), mas estão na posição incorreta.";

                    if(10 - attempts == 0) {
                        break;
                    }else{
                        cout << "\n Você possui " << 10 - attempts << " tentativas restantes.";
                    }

                    attempts++;

                }while(attempts <= 10);

                if(!won) cout << "\n Você perdeu, tente novamente.";
                break;
            }
            case 1:
                cout << "Você selecionou a opção sobre!";
                break;
            
            case 2: 
                cout << "Você selecionou a opção sair!";
                break;

            default:
                cout << "Você selecionou uma opção inexistente, escolha novamente";
                break;
    }
   }
}