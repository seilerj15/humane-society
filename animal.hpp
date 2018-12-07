/*
	Author: 	Jordan Seiler
	Student ID: N982C597
	Program #:	Final Project

	Class name: Animal
		Member varables:
			string name, double age, double id, string gender, string size, string trait
		Member functions:
			Default Constructor
			Overloaded Constructor(n, a, i, g, s, t)
			friend Overloaded << operator
			friend Overloaded >> operator
*/

#ifndef GUARD_animal_hpp
#define GUARD_animal_hpp

#include <iostream>
using namespace std;

namespace ASpace
{

class Animal
{
protected:
	string name;
	double age;
	double id;
	string gender;
	string size;
	string trait;
public:
	Animal();
	Animal(char const* n, double a, double i, char const* g, char const* s, char const* t);
	friend std::ostream& operator<< (std::ostream &out, const Animal &a);
	friend std::istream& operator>> (std::istream &in,  Animal &a);

};

}
#endif
