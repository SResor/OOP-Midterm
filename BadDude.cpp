/*
    @file BadDude.cpp
    @author Sean Resor
    @date 4/12/21
 */

#pragma once

#include <iostream>
#include "BadDude.h"

    // Constructor for BadDude class
    badDude::badDude(const char* fN, const char* lN, double d, int n): gunslinger(fN, lN, d, n)
    {
    }

    // Function to return the Gunslinger class's Draw() function
    double badDude::Gdraw()
    {
        return gunslinger::Draw();
    }

    // Function to return the PokerPlayer class's Draw() function
    int badDude::Cdraw()
    {
        return pokerPlayer::Draw();
    }

    // Function to print the first and last names, the draw speed, and the number of notches
    void badDude::Show()
    {
        cout << "The Bad Dude is: " << endl;
        cout << gunslinger::getFirstName() << " " << gunslinger::getLastName() << endl;
        cout << "Draw speed: " << getDraw() << endl;
        cout << "Gun notches: " << getNotches() << endl << endl;
    }

    // Operator overload for the assignment operator
    badDude& badDude::operator=(badDude const& x)
    {
        gunslinger::operator=(x);

        return *this;
    }
