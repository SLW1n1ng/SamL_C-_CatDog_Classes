#include "cat.h"
#include <iostream>

// Cat class constructors implementations
Cat::Cat() { name = "Here Kitty"; color = "Any cat color"; age = 0; }	// default constructor implementation
Cat::Cat(std::string name, std::string color, int age) : name(name), color(color), age(age) {}	// constructor
Cat::~Cat() { std::cout << "Meeeowr!!..." << std::endl; }						//destructor implementation
Cat::Cat(const Cat& copy) : name(copy.name), color(copy.color), age(copy.age) {}// copy cat constructor 

// get functions for name, color, age implementations
std::string Cat::getName() { return name; }
std::string Cat::getColor() { return color; }
int Cat::getAge() { return age; }

// set functions for name, color, age implementations
void Cat::setName(std::string name) { this->name = name; }
void Cat::setColor(std::string color) { this->color = color; }
void Cat::setAge(int age) { if (age < 30 && age > 0) { this->age = age; } else { this->age = 0; } }

// Member functions for meow and getCatInfo implementations
void Cat::meow() { std::cout << "Meow! Meow!" << std::endl << std::endl; }
void Cat::getCatInfo() { std::cout << "Name: " << name << "\nColor: " << color << "\nAge: " << age << std::endl << std::endl; }

