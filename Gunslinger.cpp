/*
    @file Gunslinger.cpp
    @author Sean Resor
    @date 4/12/21
 */

#pragma once

#include <iostream>
#include "Gunslinger.h"

    // Constructor for the Gunslinger class
    gunslinger::gunslinger(const char* fN, const char* lN, double d, int n): person(fN, lN)
    {
        draw = d;
        notches = n;
    }

    // Draw function to print the Gunslinger's draw time
    double gunslinger::Draw()
    {
        return draw;
    }

    // Show function to print the first and last names, the draw speed, and the number of notches
    void gunslinger::Show()
    {
        cout << "The gunslinger is:" << endl;
        cout << getFirstName() << " " << getLastName() << endl;
        cout << "Draw speed: " << draw << endl;
        cout << "Gun notches: " << notches << endl << endl;
    }

    // Returns the draw speed of the Gunslinger
    double gunslinger::getDraw()
    {
        return draw;
    }

    // Returns the number of notches on the Gunslinger's gun
    int gunslinger::getNotches()
    {
        return notches;
    }
    
    // Overloads the assignment operator for the Gunslinger class
    gunslinger& gunslinger::operator=(gunslinger const& x)
    {
        person::operator=(x);
        draw = x.draw;
        notches = x.notches;

        return *this;
    }
