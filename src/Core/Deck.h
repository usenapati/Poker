#pragma once

enum rank
{
    two = 2, three, four, five, six, seven, eight, nine, ten, jack, queen, king
};

enum suit
{
    clubs, diamonds, hearts, spades
    // ♣, ♦, ♥, ♠	
};

struct card
{
public:
    rank rank;
    suit suit;
    
    
};

class Deck
{
private:
    card* deck[52];
public:
    // Initialize Deck
    // Shuffle Deck
    // Get Top Card in Stack
};
