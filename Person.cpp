/*
	@file Person.cpp
	@author Sean Resor
	@date 4/12/21
*/

#pragma once
#pragma warning(disable:4996)

#include <iostream>
#include "Person.h"

// Default constructor for the Person class
person::person()
{
	firstLength = 0;
	lastLength = 0;
	firstName = new char[1] { '\0' };
	lastName = new char[1] { '\0' };
}

// Constructor for the Person class
person::person(const char* fN, const char* lN)
{
	// Sets the variables for the length of the first and last name
	firstLength = 0;
	lastLength = 0;

	// Increments the variable for the length of the first name based on passed char pointer
	while (fN[firstLength] != '\0')
	{
		firstLength++;
	}

	// Increments the variable for the length of the last name based on passed char pointer
	while (lN[lastLength] != '\0')
	{
		lastLength++;
	}

	// Assigns a new pointer variable for the first name
	firstName = new char[firstLength + 1];

	// Copies the values of the passed char pointer into the new variable
	for (int i = 0; i < firstLength; i++)
	{
		firstName[i] = fN[i];
	}

	// Adds a null character onto the end of the array
	firstName[firstLength] = '\0';

	// Assigns a new pointer variable for the last name
	lastName = new char[lastLength + 1];

	// Copies the values of the passed char pointer into the new variable
	for (int i = 0; i < lastLength; i++)
	{
		lastName[i] = lN[i];
	}

	// Adds a null character onto the end of the array
	lastName[lastLength] = '\0';
}

// Destructor for the Person class
person::~person()
{
	delete[] firstName;
	delete[] lastName;
}

// Show function to print the first and last names
void person::Show()
{
	cout << "The person's name is: ";
	cout << firstName << " " << lastName << endl << endl;
}

// Getter for the first name
char* person::getFirstName()
{
	return firstName;
}

// Getter for the last name
char* person::getLastName()
{
	return lastName;
}

// Operator overload for the assignment operator
person& person::operator=(person const& x)
{
	// Deletes the pointer variables if they exist
	delete[] firstName;
	delete[] lastName;

	firstLength = x.firstLength;
	lastLength = x.lastLength;

	// Assigns a new pointer variable for the first name
	firstName = new char[x.firstLength];

	// Copies the letters for the first name from the parameter object
	for (int i = 0; i < x.firstLength; i++)
	{
		firstName[i] = x.firstName[i];
	}

	// Assigns a new pointer variable for the last name
	lastName = new char[x.lastLength];

	// Copies the letters for the last name from the parameter object
	for (int i = 0; i < x.lastLength; i++)
	{
		lastName[i] = x.lastName[i];
	}

	return *this;
}

person::person(const person& x)
{
	firstLength = x.firstLength;
	lastLength = x.lastLength;

	// Assigns a new pointer variable for the first name
	firstName = new char[x.firstLength];

	// Copies the letters for the first name from the parameter object
	for (int i = 0; i < x.firstLength; i++)
	{
		firstName[i] = x.firstName[i];
	}

	// Assigns a new pointer variable for the last name
	lastName = new char[x.lastLength];

	// Copies the letters for the last name from the parameter object
	for (int i = 0; i < x.lastLength; i++)
	{
		lastName[i] = x.lastName[i];
	}
}
