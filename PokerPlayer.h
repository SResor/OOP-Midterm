/*
    @file PokerPlayer.h
    @author Sean Resor
    @date 4/12/21
*/

#ifndef POKERPLAYER_H
#define POKERPLAYER_H

#include "Person.h"

using namespace std;

class pokerPlayer : virtual public person
{
public:
    pokerPlayer();

    // Constructor for the PokerPlayer class
    pokerPlayer(const char* fN, const char* lN);

    // Show function to print the first and last names
    void Show();

    // Function to return a card number
    int Draw();
};
#endif
