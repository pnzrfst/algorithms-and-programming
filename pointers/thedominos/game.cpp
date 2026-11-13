#include "game.h"

#include <cstddef>
#include <iostream>
#include <string>

void setup_game(int manyPlayers, Game &game_state) {
    game_state.amountOfPlayers = manyPlayers;
    game_state.players = new Player*[manyPlayers];
    game_state.isOver = false;

    for (int i = 0; i < manyPlayers; i++) {
        string name;

        cout << "Insira seu nome: \n";
        getline(cin, name);
        cin.ignore();

        game_state.players[i] = create_player(name);
    }
}

void fill_stones(Game &game_state) {
    int counter = 0;

    for(int i = 0; i <= 6; i++) {
        for(int k = i; k <= 6; k++) {
            game_state.possibleStones[counter]->value[0] = i;
            game_state.possibleStones[counter]->value[1] = k;
            counter++;
        }
    }
};

void allocate_stones(Game &game_state){
    for(int i = 0; i < 28; i++) {
        game_state.possibleStones[i] = new Stone;
    }

    fill_stones(game_state);

}

void free_stones(Game &game_state) {
    for(int i = 0; i < 28; i++){
        delete game_state.possibleStones[i];
        game_state.possibleStones[i] = nullptr;
    }
}

void randomize_stones(Game &game_state, int manyPlayers, Player &player) {
    if(manyPlayers > 4 || manyPlayers < 0) cout << "------------(erro): Quantidade de players maior do que o suportado. \n";

    for (int i = 0; i < manyPlayers; i++){
        Stone* randomized_stone = new Stone[2];

        int random_index = rand() % 28;

        randomized_stone[i].value[0] = game_state.possibleStones[random_index]->value[0];
        randomized_stone[i].value[1] = game_state.possibleStones[random_index]->value[1];

        player.stones = randomized_stone;
    }
};

Stone* draw_stone(Game &game_state) {
    int last_stone = --game_state.availableStones;
    Stone* drawn = game_state.possibleStones[last_stone];
    game_state.possibleStones[last_stone] = nullptr;
    return drawn;
}

Player* create_player(string name){
    Player* player = new Player;

    player->name = name;
    player->stones = nullptr;
    player->amountOfTotalStones = 0;
    return player;
};
