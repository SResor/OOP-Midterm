/*
	@file midterm.cpp
	@author Sean Resor
	@date 4/12/21
*/

// Header files to include
#include <stdio.h>
#include <iostream>
#include <string>
#include "BadDude.h"

// Using standard namespace
using namespace std;

int main()
{
	// Sets the name variables to the first values
	const char* first = "Sally";
	const char* last = "Smith";

	// Instantiates a Person object
	person Sally(first, last);

	// Prints the Person object's name
	Sally.Show();

	// Resets the name variables
	first = "Wyatt";
	last = "Earp";

	// Instantiates a Gunslinger object
	gunslinger Wyatt(first, last, 1.5, 10);
	
	// Prints the Gunslinger object's details
	Wyatt.Show();

	// Prints the Gunslinger object's draw speed
	cout << "Their draw speed is: " << Wyatt.Draw() << endl << endl;

	// Resets the name variables
	first = "Victoria";
	last = "Coren";

	// Instantiates a PokerPlayer object
	pokerPlayer Victoria(first, last);

	// Prints the PokerPlayer object's details
	Victoria.Show();

	// Draws a card for the PokerPlayer object
	cout << "The card drawn is card number: " << Victoria.Draw() << endl << endl;

	// Resets the name variables
	first = "Michael";
	last = "Scott";

	// Instantiates a BadDude object
	badDude Michael(first, last, 3.5, 1);

	// Prints the BadDude object's details
	Michael.Show();

	// Prints out the BadDude object's draw speed and draws a card for them
	cout << "Their draw speed is: " << Michael.Gdraw() << endl;
	cout << "The card they draw is card number: " << Michael.Cdraw() << endl << endl;

	return 0;
}
