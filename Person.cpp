/*
	@file Person.cpp
	@author Sean Resor
	@date 4/12/21
*/

#pragma once
#pragma warning(disable:4996)

#include <iostream>
#include "Person.h"

person::person()
{}

// Constructor for the Person class
person::person(const char* fN, const char* lN)
{
	firstName = new char[sizeof fN + 1];
	strcpy(firstName, fN);
	lastName = new char[sizeof lN + 1];
	strcpy(lastName, lN);
}

// Destructor for the Person class
person::~person()
{
	delete firstName;
	delete lastName;
}

// Show function to print the first and last names
void person::Show()
{
	cout << "The person's name is:" << endl;
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
	firstName = new char[sizeof x.firstName];
	strcpy(firstName, x.firstName);
	lastName = new char[sizeof x.lastName];
	strcpy(lastName, x.lastName);

	return *this;
}
