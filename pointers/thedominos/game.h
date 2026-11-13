#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;


struct Stone {
    int value[2] = {};
};

struct Hand {
    Stone** stones = nullptr;
    int capacity = 0;
    int amount = 0;
};

struct Player {
    string name = {};
    Stone* stones;
    int amountOfTotalStones = {};
    Hand hand;
};

struct Game {
    Stone* possibleStones[28];
    int availableStones = 28;
    bool isOver;
    Player** players = nullptr;
    int amountOfPlayers = 0;
};

void playable_table();

void setup_game(int manyPlayers, Game &game_state);

void fill_stones(Game &game_state);

void allocate_stones(Game &game_state);

void free_stones(Game &game_state);

void randomize_stones(Game &game_state, int manyPlayers, Player &player);
Player* create_player(string name);
