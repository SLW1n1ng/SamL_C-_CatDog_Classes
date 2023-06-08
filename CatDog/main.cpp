#include <iostream>
#include "cat.h"
#include "dog.h"

int main()
{
	
	Dog dog("Rufus", "Rotweiler", 5);			    // Create instance of Dog class
	Dog copyDog(dog);								// Create a copy object of Dog class
	Dog defaultDog;									// Create instance of default Dog class

	Cat cat("Cookie", "Orange Tabby", 3);			// Create instance of Cat class
	Cat copyCat(cat);								// Create a copy object of Cat class
	Cat defaultCat;									// Create instance of default Cat class

	std::cout << "Overloaded dog information:" << std::endl;
	dog.getDogInfo();								// Call the getDogInfo class function

	std::cout << "Overloaded cat information:" << std::endl;
	cat.getCatInfo();								// Call the getCatInfo class function

	std::cout << "Copy dog information:" << std::endl;
	copyDog.getDogInfo();							// Call the copy getDogInfo class function

	std::cout << "Copy cat information:" << std::endl;
	copyCat.getCatInfo();							// Call the copy getCatInfo class function

	std::cout << "Default dog information:" << std::endl;
	defaultDog.getDogInfo();						// Print out the default dog information

	std::cout << "Default cat information:" << std::endl;
	defaultCat.getCatInfo();						// Print out the default cat information

	std::cout << "Dog barking:" << std::endl;
	dog.bark();										// Call the bark function

	std::cout << "Cat meowing:" << std::endl;
	cat.meow();										// Call the meow function

	dog.setName("Old Yeller");						// Update the dog information
	dog.setBreed("Hound");						
	dog.setAge(7);

	cat.setName("Garfield");						// Update the cat information
	cat.setColor("Orange Tabby");
	cat.setAge(8);

	std::cout << "Updated dog information:" << std::endl;
	dog.getDogInfo();								// Call the getDogInfo class function

	std::cout << "Updated cat information:" << std::endl;
	cat.getCatInfo();								// Call the getCatInfo class function

	return 0;
}

