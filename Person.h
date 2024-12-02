//
// Created by Sebastian2 on 12/1/24.
//

#ifndef PERSON_DEMO_PERSON_H
#define PERSON_DEMO_PERSON_H

#include <iostream>
#include <string>

class Person
{
	public:
		Person();
		Person(std::string name, int age, std::string eyeColor);
		std::string getName();
		void setName (std::string name);
		int getAge();
		void setAge(int age);
		std::string getEyeColor();
		void setEyeColor (std::string eyeColor);
		std::string getTraits();

	private:
		std::string name;
		int age;
		std::string eyeColor;
};


#endif //PERSON_DEMO_PERSON_H
