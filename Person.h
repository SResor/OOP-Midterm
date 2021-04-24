/*
	@file person.h
	@author Sean Resor
	@date 4/12/21
*/

#ifndef PERSON_H
#define PERSON_H

// Using standard namespace
using namespace std;

class person
{
private:
	char* firstName;
	char* lastName;

public:
	person();

	// Constructor for the Person class
	person(const char* firstName, const char* lastName);

	// Destructor for the Person class
	virtual ~person();

	// Show function to print the first and last names
	void Show();

	// Getter for the first name
	char* getFirstName();

	// Getter for the last name		
	char* getLastName();

	// Copy constructor for the person class
	person (const person& x);
	
	// Operator overload for the assignment operator
	person& operator=(person const& x);
};
#endif
