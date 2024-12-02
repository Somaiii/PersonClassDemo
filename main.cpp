#include <iostream>
#include "Person.h"

int main()
{
	// Using default constructor
	Person person1;

	std::cout << person1.getTraits() << "\n";

	// Using overloaded constructor (the one with parameters)
	Person person2("John Doe", 38, "Brown");

	std::cout << person2.getTraits();

	return 0;
}
