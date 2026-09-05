#include <iostream>
#include <cstdlib>
#include "game.h"

using namespace std;



void fillMatrix(int matrix[MaxSize][MaxSize], Point currentUserLocation, Point treasureLocation) {
    for(int i = 0; i < MaxSize; i++) {
        for(int k = 0; k < MaxSize; k++){
            matrix[i][k] = 0;
        }
    }

    matrix[currentUserLocation.x][currentUserLocation.y] = 1;
    matrix[treasureLocation.x][treasureLocation.y] = 0;
}

void showMatrix(int matrix[MaxSize][MaxSize]) {
     for (int i = 0; i < MaxSize; i++){
        for (int k = 0; k < MaxSize; k++){
            cout << "\t" << matrix[i][k];
        }
        cout << "\n";
    }
}

int randomNumber(int max) {
    return rand() % max;
}

void setupGame (Point &currentUserLocation, Point &treasureLocation, int matrix[MaxSize][MaxSize]) {
    currentUserLocation.x = randomNumber(MaxSize);
    currentUserLocation.y = randomNumber(MaxSize);

    do{
        treasureLocation.x = randomNumber(MaxSize);
        treasureLocation.y = randomNumber(MaxSize);
    }while(treasureLocation.x == currentUserLocation.x && treasureLocation.y == currentUserLocation.y);

    fillMatrix(matrix, currentUserLocation, treasureLocation);
}

int getValidSteps () {
    int steps = {};

    do{
        cout << "\n---------------- Informe quantos passos quer dar ----------------\n";
        cin >> steps;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "---------------->(erro): Entrada inválida. Digite um número inteiro positivo.\n";
            continue;
        }

        if (steps <= 0) {
            cout << "---------------->(erro): O número de passos deve ser positivo.\n";
        }

    }while (steps <= 0);

    return steps;
}

char getOptions () {
    char option = {};
    cout << " \n ---------------- Informe qual a direção que deseja se movimentar ---------------- \n";
    cout << "\n (W) - Para cima \n (A) - Para a esquerda \n (S) - Para baixo \n (D) - Para a direita \n";
    cin >> option;

    return option;
}


bool playTurn(int matrix[MaxSize][MaxSize], Point &currentUserLocation, Point &treasureLocation) {
    int steps = getValidSteps();
    char option = getOptions();

    cout << "\n ---------------- ANTES DE ANDAR ---------------- \n" ;

    showMatrix(matrix);
    int previousDistance = manhattanDistance(currentUserLocation, treasureLocation);
    bool movedSuccessfully = moveStateMachine(option, matrix, currentUserLocation, steps);

    if(movedSuccessfully) {
        int updatedDistance = manhattanDistance(currentUserLocation, treasureLocation);
        
        if(previousDistance > updatedDistance) {
            cout << "\n ----------------> (dica): Você está mais perto do tesouro. \n";
        }else{
            cout << "\n ----------------> (dica): Você está mais longe do tesouro. \n";
        }

        cout << "\n ---------------- DEPOIS DE ANDAR ---------------- \n" ;
        showMatrix(matrix);

        return true;
    }else{
        return false;
    }
    
}

bool walkVertically(int matrix[MaxSize][MaxSize], Point &currentUserLocation, int steps, char &option){
    if(currentUserLocation.x - steps < 0 && (option == 'W' || option == 'w')) {
        cout << "----------------> Movimento inválido (cima): Você quis andar mais do que o limite da matriz, tente de novo. \n";
        matrix[currentUserLocation.x][currentUserLocation.y] = 1;
        return false;
    }
        
    if(currentUserLocation.x + steps >= MaxSize && (option == 'S' || option == 's')) {
        cout << " ----------------> Movimento inválido (baixo): Você quis andar mais do que o limite da matriz, tente de novo. \n";
        matrix[currentUserLocation.x][currentUserLocation.y] = 1;
        return false;
    }    

    for(int i = 0; i < steps; i++){
        matrix[currentUserLocation.x][currentUserLocation.y] = 0;

        if(option == 'W' || option == 'w'){
            currentUserLocation.x--;
        }else {
            currentUserLocation.x++;
        }

        matrix[currentUserLocation.x][currentUserLocation.y] = 1;
    }

    return true;
}

bool walkHorizontally(int matrix[MaxSize][MaxSize], Point &currentUserLocation, int steps, char &option){
    if(currentUserLocation.y + steps >= MaxSize && (option == 'D' || option == 'd')) {
        cout << " ----------------> Movimento inválido (direita): Você quis andar mais do que o limite da matriz, tente de novo. \n";
        return false;
    }

    if(currentUserLocation.y - steps < 0 && (option == 'A' || option == 'a')) {
        cout << " ----------------> Movimento inválido (esquerda): Você quis andar mais do que o limite da matriz, tente de novo. \n";
        return false;
    }

    for(int i = 0; i < steps; i++){
        matrix[currentUserLocation.x][currentUserLocation.y] = 0;

        if(option == 'A' || option == 'a'){
            currentUserLocation.y--;
        }else {
            currentUserLocation.y++;
        }
        
        matrix[currentUserLocation.x][currentUserLocation.y] = 1;
    }

    return true;
}

bool moveStateMachine(char option, int matrix[MaxSize][MaxSize], Point &currentUserLocation, int steps) {
    if(option == 'W' || option == 'w'){
        return walkVertically(matrix, currentUserLocation, steps, option);
    }else if (option == 'A' || option == 'a'){
        return walkHorizontally(matrix, currentUserLocation, steps, option);
    }else if (option == 'S' || option == 's') {
        return walkVertically(matrix, currentUserLocation, steps, option);
    }else if (option == 'D' || option == 'd'){
        return walkHorizontally(matrix, currentUserLocation, steps, option);
    }else{
        cout << "\n Direção inválida. \n";
        return false;
    }
}

int manhattanDistance(Point currentUser, Point treasureLocation) {
    int distanceX = currentUser.x - treasureLocation.x;
    if(distanceX < 0) distanceX = -distanceX;

    int distanceY = currentUser.y - treasureLocation.y;
    if(distanceY < 0) distanceY = -distanceY;

    return distanceX + distanceY;
}