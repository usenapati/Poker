#pragma once
#include "Deck.h"

enum hand_type
{
    high_card, pair, two_pair, three_kind, straight, flush, full_house, four_kind, straight_flush, royal_flush
};

class Hand
{
public:
    Hand(const char* poker_hand) {  } // Given a string create hand of five cards
private:
    card* hand[5];
};
