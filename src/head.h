#pragma once
#include <string>
#include <iostream>
enum suit {hearts, diamonds, spades, clubs};

class card
{
private:
    /* data */
public:
    int m_value;
    suit m_suit; 
    card(int value);
    int get_int();
    //test

};


//transforming a int card to a string for printing, feels kinda ugly atm
static std::string card_to_string(int card){
    suit _suit = (suit)(card / 13);
    int _value = (card % 13) + 1;

    std::string res;

    switch (_value)
    {
    case 11:
        res += 'J';
        break;
    case 12:
        res += 'Q';
        break;
    case 13:
        res += 'K';
        break;
    default:
        res += std::to_string(_value);
        break;
    }

    switch (_suit)
    {
    case suit::hearts:
        res += 'H';
        break;
    case suit::diamonds:
        res += 'D';
        break;
    case suit::spades:
        res += 'S';
        break;
    case suit::clubs:
        res += 'C';
        break;

    default:
        break;
    }

    return res;
} 