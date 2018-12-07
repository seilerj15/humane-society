#ifndef GUARD_cat_cpp
#define GUARD_cat_cpp

#include "animal.hpp"
#include "cat.hpp"

#include <iostream>
using namespace std;

namespace ASpace
{
//Default Constructor
Cat::Cat() : Animal() {}

//Overloaded Constructor
Cat::Cat(char const* n, double a, double i, char const* g, char const* s, char const* t)
	: Animal(n, a, i, g, s, t) {}

//Accessor functions
double Cat::getAge() {return age;};
double Cat::getID() {return id;};
string Cat::getName() {return name;};
string Cat::getGender() {return gender;};
string Cat::getSize() {return size;};

}
#endif
