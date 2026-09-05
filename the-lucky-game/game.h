#ifndef GAME_H
#define GAME_H

#define MaxSize 15

struct Point {
    int x = {};
    int y = {};
};

int randomNumber(int max);

void fillMatrix(int matrix[MaxSize][MaxSize], Point currentUserLocation, Point treasureLocation);
void showMatrix(int matrix[MaxSize][MaxSize]);
void setupGame(Point &currentUserLocation, Point &treasureLocation, int matrix[MaxSize][MaxSize]);


bool playTurn(int matrix[MaxSize][MaxSize], Point &currentUserLocation, Point &treasureLocation);
int getValidSteps();
char getOptions();

bool moveStateMachine(char option, int matrix[MaxSize][MaxSize], Point &currentUserLocation, int steps);
bool walkVertically(int matrix[MaxSize][MaxSize], Point &currentUserLocation, int steps, char &option);
bool walkHorizontally(int matrix[MaxSize][MaxSize], Point &currentUserLocation, int steps, char &option);
int manhattanDistance(Point currentUser, Point treasureLocation);


#endif