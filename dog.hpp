/*
	Author: 	Jordan Seiler
	Student ID: N982C597
	Program #:	Final Project

	Class name: Dog
		(inherited from Animal) Member varables:
			string name, double age, double id, string gender, string size, string trait
		(inherited from Animal) Member functions:
			Default Constructor
			Overloaded Constructor(n, a, i, g, s, t)
			friend Overloaded << operator
			friend Overloaded >> operator
		Member functions:
			double getAge
			double getID
			string getName
			string getGender
			string getSize
*/

#ifndef GUARD_dog_hpp
#define GUARD_dog_hpp

#include "animal.hpp"

#include <iostream>
using namespace std;

namespace ASpace
{

class Dog : public Animal
{
public:
	Dog();
	Dog(char const* n, double a, double i, char const* g, char const* s, char const* t);
	double getAge();
	double getID();
	string getName();
	string getGender();
	string getSize();
};
}
#endif
