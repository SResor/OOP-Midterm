/*
    @file BadDude.h
    @author Sean Resor
    @date 4/12/21
  */

#ifndef BADDUDE_H
#define BADDUDE_H

#include "Gunslinger.h"
#include "PokerPlayer.h"
#include "Person.h"

using namespace std;

class badDude : virtual public gunslinger, public pokerPlayer 
{
public:
    badDude();

    // Constructor for BadDude class
    badDude(const char* firstName, const char* lastName, double draw, int notches);

    // Function to return the Gunslinger class's Draw() function
    double Gdraw();

    // Function to return the PokerPlayer class's Draw() function
    int Cdraw();

    // Function to print the first and last names, the draw speed, and the number of notches
    void Show();

    // Operator overload for the assignment operator
    badDude& operator=(badDude const& x);
};
#endif
