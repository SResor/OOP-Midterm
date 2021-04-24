/*
    @file Gunslinger.h
    @author Sean Resor
    @date 4/12/21
  */

#ifndef GUNSLINGER_H
#define GUNSLINGER_H

#include "Person.h"

using namespace std;

class gunslinger : virtual public person
{
private:
    double draw;        // Variable for the draw time of the Gunslinger
    double notches;     // Variable for the number of notches on the Gunslinger's gun

public:
    // Constructor for the Person class
    gunslinger(const char* firstName, const char* lastName, double draw, int notches);

    // Draw function to print the Gunslinger's draw time
    double Draw();

    // Show function to print the first and last names
    void Show();

    // Returns the draw speed of the Gunslinger
    double getDraw();

    // Returns the number of notches on the Gunslinger's gun
    int getNotches();

    // Overloads the assignment operator for the Gunslinger class
    gunslinger& operator=(gunslinger const& x);
};
#endif
