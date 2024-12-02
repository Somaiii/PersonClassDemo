//
// Created by Sebastian2 on 12/1/24.
//

#include "Person.h"

Person::Person()
{
	name = "Nehemiah";
	age = 17;
	eyeColor = "Blue";
}

Person::Person(std::string name, int age, std::string eyeColor)
{
	this->name = name;
	this->age = age;
	this->eyeColor = eyeColor;
}

std::string Person::getName()
{
	return name;
}

void Person::setName(std::string name)
{
	this->name = name;
}

int Person::getAge()
{
	return age;
}

void Person::setAge(int age)
{
	this->age = age;
}

std::string Person::getEyeColor()
{
	return eyeColor;
}

void Person::setEyeColor(std::string eyeColor)
{
	this->eyeColor = eyeColor;
}

std::string Person::getTraits()
{
	return name + ", " + std::to_string(age) + ", " + eyeColor;
}


