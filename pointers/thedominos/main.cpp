#include "game.h"

int main() {
    Game game_state;
    int manyPlayers = {};

    allocate_stones(game_state);

    for (int i = 0; i < 28; i++) {
        cout << game_state.possibleStones[i]->value[0] << "|"
             << game_state.possibleStones[i]->value[1] << "\n";
    }

    do{
        cout << "\n Escolha quantos jogadores irão jogar este jogo: (min 2, máx 4) \n";
        cin >> manyPlayers;
    }while(manyPlayers < 0 || manyPlayers > 4);

    free_stones(game_state);

    return 0;
}
