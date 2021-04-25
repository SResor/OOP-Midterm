/*
    @file PokerPlayer.cpp
    @author Sean Resor
    @date 4/12/21
*/

#pragma once

#include <iostream>
#include "PokerPlayer.h"

pokerPlayer::pokerPlayer()
{}

// Constructor for the PokerPlayer class
pokerPlayer::pokerPlayer(const char* fN, const char* lN) : person(fN, lN)
{}

// Show function to print the first and last names
void pokerPlayer::Show()
{
	person::Show();
}

// Function that returns a random number between 1 and 52
int pokerPlayer::Draw()
{
	// Returns a random number between 1 and 52
	return (rand() % 51) + 1;
}
