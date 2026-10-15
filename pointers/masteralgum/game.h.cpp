#ifndef GAME_H
#define GAME_H

extern int MaxSize;

struct Point {
    int x = {};
    int y = {};
};

int randomNumber(int max);

void fillMatrix(int **matrix, Point currentUserLocation, Point treasureLocation);
void showMatrix(int **matrix);
void setupGame(Point &currentUserLocation, Point &treasureLocation, int **matrix);

bool playTurn(int **matrix, Point &currentUserLocation, Point &treasureLocation);
int getValidSteps();
char getOptions();

bool moveStateMachine(char option, int **matrix, Point &currentUserLocation, int steps);
bool walkVertically(int **matrix, Point &currentUserLocation, int steps, char &option);
bool walkHorizontally(int **matrix, Point &currentUserLocation, int steps, char &option);
int manhattanDistance(Point currentUser, Point treasureLocation);


#endif
