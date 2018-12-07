/*
    Author: 	Jordan Seiler
    Student ID: N982C597
    Program #:	Final Project

	Description: This program builds a database of animals, allows the user
	to enter a new animal and then search the database for a specific
	animal/list of animals.
*/

#include <iostream>
#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
using namespace std;
using namespace ASpace;

int main()
{
	//Create dog objects
    Dog Max("Max", 2, 1051, "male", "medium", "lab");
    Dog Spot("Spot", 2, 1032, "male", "medium", "dalmatian");
    Dog Daisy("Daisy", 5, 1049, "female", "small", "beagle");
    Dog Sadie("Sadie", 8, 1085, "female", "large", "poodle");
    Dog Sam("Sam", 8, 1058, "male", "large", "poodle");

	//Create cat objects
    Cat Shadow("Shadow", 4, 2049, "female", "medium", "playful");
    Cat Whiskers("Whiskers", 4, 2029, "male", "medium", "lazy");
	Cat Sherlock("Sherlock", 3, 2037, "male", "large", "lazy");
	Cat Stormy("Stormy", 1, 2059, "female", "small", "curious");

	//User inputs new animal information
	cout << "Enter a new animal \n";
	cout << "Enter 1 to input dog info, or 2 to input cat \n";
	int animalNum;
	cin >> animalNum;

	Dog dog1;
	Cat cat1;

	switch (animalNum)
	{
		case 1:
			cout << "Enter dog's name, age, ID number (4 digits starting with 1), ";
			cout << " gender, size, and breed (with space in between)\n";
			cin >> dog1;
			break;
		case 2:
			cout << "Enter cat's name, age, ID number (4 digits starting with 2), ";
			cout << "gender, size, and trait (with space in between)\n";
			cin >> cat1;
			break;
		default:
			cout << "Invalid input \n";
			break;
	}

	//Prompt to allow user to search for animal/s by criteria
	cout << "Enter a number to search database \n";
	cout << "1) Search by name\n";
	cout << "2) Search by age\n";
	cout << "3) Search by animal ID\n";
	cout << "4) Search by gender\n";
	cout << "5) Search by animal size\n";

	int sInput;
	cin >> sInput;

	switch (sInput)
	{
		case 1:
		{
			cout << "Enter dog's name: ";
			string nameInput;
			cin >> nameInput;
			nameInput[0] = toupper(nameInput[0]);

			if (nameInput == "Max")
				cout << Max;
			else if (nameInput == "Spot")
				cout << Spot;
			else if (nameInput == "Daisy")
				cout << Daisy;
			else if (nameInput == "Sadie")
				cout << Sadie;
			else if (nameInput == "Sam")
				cout << Sam;
			else if (nameInput == "Shadow")
				cout << Shadow;
			else if (nameInput == "Whiskers")
				cout << Whiskers;
			else if (nameInput == "Sherlock")
				cout << Sherlock;
			else if (nameInput == "Stormy")
				cout << Stormy;
			else if (nameInput == dog1.getName())
				cout << dog1;
			else if (nameInput == cat1.getName())
				cout << cat1;
			else
				cout << "No animals match your search criteria \n";
			break;
		}
		case 2:
		{
			cout << "Enter age in years ";
			double years;
			cin >> years;
			if (years == 1)
			{
				if (dog1.getAge() == 1)
					cout << dog1 << endl;
				if (cat1.getAge() == 1)
					cout << cat1 << endl;
				cout << Stormy;
			}
			else if (years == 2)
			{
				if (dog1.getAge() == 2)
					cout << dog1 << endl;
				if (cat1.getAge() == 2)
					cout << cat1 << endl;
				cout << Max << endl;
				cout << Spot;
			}
			else if (years == 3)
			{
				if (dog1.getAge() == 3)
					cout << dog1 << endl;
				if (cat1.getAge() == 3)
					cout << cat1 << endl;
				cout << Sherlock;
			}
			else if (years == 4)
			{
				if (dog1.getAge() == 4)
					cout << dog1 << endl;
				if (cat1.getAge() == 4)
					cout << cat1 << endl;
				cout << Shadow << endl;
				cout << Whiskers;
			}
			else if (years == 5)
			{
				if (dog1.getAge() == 5)
					cout << dog1 << endl;
				if (cat1.getAge() == 5)
					cout << cat1 << endl;
				cout << Daisy;
			}
			else if (years == 8)
			{
				if (dog1.getAge() == 8)
					cout << dog1 << endl;
				if (cat1.getAge() == 8)
					cout << cat1 << endl;
				cout << Sadie << endl;
				cout << Sam;
			}
			else if (years == dog1.getAge())
				cout << dog1;
			else if (years == cat1.getAge())
				cout << cat1;
			else
				cout << "Search criteria not found \n";
			break;
		}
		case 3:
		{
			cout << "Enter 1 to print dogs, 2 to print cats \n";
			double idInput;
			try
			{
				cin >> idInput;
				if (idInput != 1 || idInput != 2)
					throw 0;
			}
			catch (int x)
			{
				cout << "An exception occurred. \n";
			}
			if (idInput == 1)
				cout << Max << Spot << Daisy << Sadie << Sam << dog1 << endl;
				if (dog1.getID() > 1000 || dog1.getID() < 2000)
					cout << dog1;
			else if (idInput == 2)
				cout << Shadow << Whiskers << Sherlock << Stormy << cat1 << endl;
				if (cat1.getID() > 1999 || cat1.getID() < 3000)
			break;
		}
		case 4:
		{
			cout << "Enter 'male' or 'female' \n";
			string gInput;
			cin >> gInput;
			if (gInput == "Male" || "male")
			{
				cout << "Dogs: \n" << Max << Spot << Sam;
				if (dog1.getGender() == "Male" || "male")
					cout << dog1;
				cout << "Cats: \n" << Whiskers << Sherlock;
				if (cat1.getGender() == "Male" || "male")
					cout << cat1;
			}
			else if (gInput == "Female" || "female")
			{
				cout << "Dogs: \n" << Daisy << Sadie;
				if (dog1.getGender() == "Female" || "female")
					cout << dog1;
				cout << "Cats: \n" << Shadow << Stormy;
				if (cat1.getGender() == "Female" || "female")
					cout << cat1;
			}
			else
				cout << "Invalid input \n";
			break;
		}
		case 5:
		{
			cout << "Enter 'small', 'medium' or 'large': ";
			string sizeInput;
			cin >> sizeInput;
			if (sizeInput == "Small" || "small")
			{
				cout << "Dogs \n" << Daisy;
				if (dog1.getSize() == "Small" || "small")
					cout << dog1;
				cout << "Cats: \n" << Stormy;
				if (cat1.getSize() == "Small" || "small")
					cout << cat1;
			}
			else if (sizeInput == "Medium" || "medium")
			{
				cout << "Dogs: \n" << Max << Spot;
				if (dog1.getSize() == "Medium" || "medium")
					cout << dog1;
				cout << "Cats \n" << Shadow << Whiskers;
				if (cat1.getSize() == "Medium" || "medium")
					cout << cat1;
			}
			else if (sizeInput == "Large" || "large")
			{
				cout << "Dogs: \n" << Sadie << Sam;
				if (dog1.getSize() == "Large" || "large")
					cout << dog1;
				cout << "Cats: \n" << Sherlock;
				if (cat1.getSize() == "Large" || "large")
					cout << cat1;
			}
			else
				cout << "Invalid input \n";
			break;
		}
		default:
			cout << "Invalid input \n";
			break;
	}

	return 0;
}
