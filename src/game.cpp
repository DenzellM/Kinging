#include <numeric>
#include <algorithm>
#include <iostream>
#include <random>

#include "game.h"

Game::Game() : _players(4), _deck(52)
{
    //initiates and shuffles the deck
    std::iota (std::begin(_deck), std::end(_deck), 0);
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(_deck), std::end(_deck), rng);
    
    deal();
    for (size_t i = 0; i < _players.size(); i++)
    {
        std::cout << _players[i].show_hand() << std::endl;
    }
    
}

void Game::deal(){
    for (size_t i = 0; i < 3; i++)
    {
        int card_amount = 4;
        //we share the game in 2 rounds of 4 and a round of 5
        if(i == 2) ++card_amount;
        for (size_t j = 0; j < _players.size(); j++)
        {
            for (size_t k = 0; k < card_amount; k++)
            {
                _players[j].add_card(_deck.back());
                _deck.pop_back();
            }
            
        }
        
    }
    
}

void Game::show_deck(){
    std::string res;
    res += "[" ;

    for (size_t i = 0; i < _deck.size(); i++)
    {

        res += card_to_string(_deck[i]);
        // res += std::to_string(_deck[i]);
        if(i == _deck.size() - 1) break;
        res += ", ";
    }
    
    res += "]" ;

    std::cout << res << std::endl;
}