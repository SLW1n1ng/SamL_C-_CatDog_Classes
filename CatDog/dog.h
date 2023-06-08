#ifndef DOG_H
#define DOG_H
#include <string>

class Dog {												//Dog class
private:												//Member variables
	std::string name;
	std::string breed;
	int age;

public:
	Dog();												//default constructor
	Dog(std::string name, std::string breed, int age);	//constructor prototype 
	~Dog();												//destructor prototype
	Dog(const Dog& copy);								//copy constructor

	std::string getName();								//get prototypes for name
	std::string getBreed();								//get prototypes for breed
	int getAge();										//get prototypes for age

	void setName(std::string name);						//set prototypes for name
	void setBreed(std::string breed);					//set prototypes for breed
	void setAge(int age);								//set prototypes for age

	void bark();										//Member functions prototypes for bark
	void getDogInfo();									//Member functions prototypes for getDogInfo

};

#endif // !DOG_H
