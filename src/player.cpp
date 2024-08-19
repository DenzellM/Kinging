#include "player.h"

Player::Player(/* args */)
{
}

Player::~Player()
{
}

std::string Player::show_hand(){
    std::string res;
    res += "[" ;

    for (size_t i = 0; i < _cards.size(); i++)
    {
        res += card_to_string(_cards[i]);
        if(i == _cards.size() - 1) break;
        res += ", ";
    }
    
    res += "]" ;
    return res;
}

void Player::add_card(int card){
    _cards.push_back(card);
}