#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h.cpp"

using namespace std;

int main () {
    srand(time(nullptr));
    int matrix[MaxSize][MaxSize] = {};
    
    int turns = 0;
    int startGame = {};
    
    Point currentUserLocation = {};
    Point treasureLocation = {};


    cout << "Deseja começar (1) - Sim, (0) - Não " << '\n';
    cin >> startGame;

    if(startGame != 1){
        return 0;    
    }
    
    setupGame(currentUserLocation, treasureLocation, matrix);

    while(currentUserLocation.x != treasureLocation.x || currentUserLocation.y != treasureLocation.y) {
        bool turnSuccessfullyExecuted = playTurn(matrix, currentUserLocation, treasureLocation);
        
        if(turnSuccessfullyExecuted) turns++;
    }

    cout << "\nParabéns!!! você ganhou o jogo! " <<  "Foram necessários " << turns << "turnos.. " << '\n';
    return 0;
}