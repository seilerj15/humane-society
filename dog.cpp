#ifndef GUARD_dog_cpp
#define GUARD_dog_cpp

#include "animal.hpp"
#include "dog.hpp"

#include <iostream>
using namespace std;

namespace ASpace
{
//Default Constructor
Dog::Dog() : Animal() {}

//Overloaded Constructor
Dog::Dog(char const* n, double a, double i, char const* g, char const* s, char const* t)
	: Animal(n, a, i, g, s, t) {}

//Accessor Functions
double Dog::getAge() {return age;};
double Dog::getID() {return id;};
string Dog::getName() {return name;};
string Dog::getGender() {return gender;};
string Dog::getSize() {return size;};

}
#endif
