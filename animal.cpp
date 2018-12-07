#include <iostream>
#include "animal.hpp"
namespace ASpace
{

//Default constructor
Animal::Animal() : age(0), id(0) {}

//Overloaded constructor
Animal::Animal(char const* n, double a, double i, char const* g, char const* s, char const* t)
	: name(n), age(a), id(i), gender(g), size(s), trait(t) {}

//Overloaded << operator
std::ostream& operator<< (std::ostream &out, const Animal &a)
{
	out << "Name: " << a.name << endl;
	out << "Age: " << a.age << endl << "ID Number: " << a.id << endl;
	out << "Gender: " << a.gender << endl << "Size: " << a.size << endl;
	out << "Trait: "<< a.trait << endl << endl;

	return out;
}

//Overloaded >> operator
std::istream& operator>> (std::istream &in, Animal &a)
{
	in >> a.name >> a.age >> a.id >> a.gender >> a.size >> a.trait;
	a.name[0] = toupper(a.name[0]);
	return in;
}
}
