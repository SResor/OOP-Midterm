/*
	@file midterm.cpp
	@author Sean Resor
	@date 4/12/21
*/

// Header files to include
#include <stdio.h>
#include <iostream>
#include <string>
#include <ctime>
#include "BadDude.h"

// Using standard namespace
using namespace std;

int main()
{
	// Sets the seed of the random number generator
	srand(time(0));


	// Instantiates a Person object
	person* Sally = new person("Sally", "Smith");

	// Prints the Person object's name
	Sally->Show();

	// Instantiates a Person object
	person* Steve = new person();

	// Uses overloaded assignment operator to set new Person object equal to old Person object
	Steve = Sally;

	cout << "Demonstrating successful assignment...\n";

	// Prints the Person object's name
	Steve->Show();

	// Calls destructor for Person objects
	delete Sally;


	// Instantiates a Gunslinger object
	gunslinger* Wyatt = new gunslinger("Wyatt", "Earp", 1.5, 10);
	
	// Prints the Gunslinger object's details
	Wyatt->Show();

	// Prints the Gunslinger object's draw speed
	cout << "Their draw speed is: " << Wyatt->Draw() << endl << endl;

	cout << "Demonstrating successful assignment...\n";

	// The next three lines demonstrate the functioning assignment operator
	gunslinger* Doc = new gunslinger();
	Doc = Wyatt;
	Doc->Show();

	// Calls destructor for Gunslinger objects
	delete Wyatt;

	// Instantiates a PokerPlayer object
	pokerPlayer* Victoria = new pokerPlayer("Victoria", "Coren");

	// Prints the PokerPlayer object's details
	Victoria->Show();

	// Draws a card for the PokerPlayer object
	cout << "The card drawn is card number: " << Victoria->Draw() << endl << endl;

	cout << "Demonstrating successful assignment...\n";

	// The next three lines demonstrate the functioning assignment operator
	pokerPlayer* Daniel = new pokerPlayer();
	Daniel = Victoria;
	Daniel->Show();

	// Calls destructor for PokerPlayer objects
	delete Victoria;

	// Instantiates a BadDude object
	badDude* Michael = new badDude("Michael", "Scott", 3.5, 1);

	// Prints the BadDude object's details
	Michael->Show();

	// Prints out the BadDude object's draw speed and draws a card for them
	cout << "Their draw speed is: " << Michael->Gdraw() << endl;
	cout << "The card they draw is card number: " << Michael->Cdraw() << endl << endl;

	cout << "Demonstrating successful assignment...\n";

	// The next three lines demonstrate the functioning assignment operator
	badDude* Dwight = new badDude();
	Dwight = Michael;
	Dwight->Show();

	// Calls destructor for BadDude objects
	delete Michael;

	return 0;
}
