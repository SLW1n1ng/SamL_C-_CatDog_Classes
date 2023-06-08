#include <iostream>
#include "dog.h"

// Dog class constructors implementations
Dog::Dog() { name = "Here Dog"; breed = "Any dog breed "; age = 0; }		// default constructor implementation
Dog::Dog(std::string name, std::string breed, int age) : name(name), breed(breed), age(age) {}	// constructor 
Dog::~Dog() { std::cout << "Arrrf!!..." << std::endl; }								// destructor implementation
Dog::Dog(const Dog& copy) : name(copy.name), breed(copy.breed), age(copy.age) {}// copy constructor implementation

// get functions for name, breed, age implementations
std::string Dog::getName() { return name; }					
std::string Dog::getBreed() { return breed; }	
int Dog::getAge() { return age; }

// set functions for name, breed, age implementations
void Dog::setName(std::string name) { this->name = name; }
void Dog::setBreed(std::string breed) { this->breed = breed; }
void Dog::setAge(int age) { if (age < 30 && age > 0) { this->age = age; } else { this->age = 0; } }

// Member functions for bark and getDogInfo implementations
void Dog::bark() { std::cout << "Woof! Woof!" << std::endl << std::endl; }
void Dog::getDogInfo() { std::cout << "Name: " << name << "\nBreed: " << breed << "\nAge: " << age << std::endl << std::endl; }
