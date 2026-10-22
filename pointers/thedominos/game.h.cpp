
#include <cstddef>
#include <cstdlib>
#include <iostream>
using namespace std;

struct Stone {
  int value[2] = {};
};

struct Player {
  string name = {};
  Stone *stones;
  int amountOfTotalStones = {};
};

struct Game {
  Stone possibleStones[28];
  int availableStones = 28;
  bool isOver;
  Player **players = nullptr;
  int amountOfPlayers = 0;
};

void playableTable();

void setupGame(int manyPlayers, Game &game_state);

void fillStones(Game &game_state);

void randomizeStones(Player &player, Game &game_state);
Player *createPlayer(string name);

void setupGame(int manyPlayers, Game &game_state) {
  game_state.amountOfPlayers = manyPlayers;
  game_state.players = new Player *[manyPlayers];

  for (int i = 0; i < manyPlayers; i++) {
    string name;

    cout << "Insira seu nome: \n";
    cin >> name;

    game_state.players[i] = createPlayer(name);
    randomizeStones(*game_state.players[i], game_state);
  }
}

void fillStones(Game &game_state) {
  int counter = 0;

  for (int i = 0; i <= 6; i++) {
    for (int k = i; k <= 6; k++) {
      game_state.possibleStones[counter].value[0] = i;
      game_state.possibleStones[counter].value[1] = k;
      counter++;
    }
  }
};

// pegar as peças do jogo, dividir entre os players, retirar das peças
// disponiveis.
void randomizeStones(Player &player, Game &game_state) {
  player.stones = new Stone[7];

  for (int counter = 0; counter < 7; counter++) {
    int randomized_stone = rand() % game_state.availableStones;

    player.stones[counter] = game_state.possibleStones[randomized_stone];

    game_state.availableStones--;
    game_state.possibleStones[randomized_stone] =
        game_state.possibleStones[game_state.availableStones];
  }

  player.amountOfTotalStones = 7;
}

Player *createPlayer(string name) {
  Player *player = new Player;

  player->name = name;
  player->stones = nullptr;
  player->amountOfTotalStones = 0;

  return player;
};
