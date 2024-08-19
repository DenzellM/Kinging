#pragma once
#include <vector>
#include "head.h"

class Player
{
private:
    std::vector<int> _cards;

public:
    Player(/* args */);
    ~Player();

    void add_card(int card);
    std::string show_hand();
    // int play_card();
};