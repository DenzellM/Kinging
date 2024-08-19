#include "head.h"

card::card(int value)
{
    m_suit = (suit)(value % 13);
    m_value = value - (m_suit * 13) + 1;
}

int card::get_int(){
    return m_value + m_suit * 13;
}
