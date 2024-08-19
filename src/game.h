#pragma once
#include "player.h"

class Game
{
private:
    void deal();
    void show_deck();
    std::vector<Player> _players;
    std::vector<int>    _deck;
    std::vector<int>    _discard;
    std::vector<int>    _hit;

public:
    Game(/* args */);
};


