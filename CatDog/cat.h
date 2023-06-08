#ifndef CAT_H
#define CAT_H
#include <string>

class Cat {												//Cat class
private:												//Member variables
	std::string name;
	std::string color;
	int age;

public:
	Cat(std::string name, std::string color, int age);	//constructor prototype
	Cat();												//default constructor
	~Cat();												//destructor prototype
	Cat(const Cat& copy);								//copy constructor

	std::string getName();								//get prototypes for name
	std::string getColor();								//get prototypes for color
	int getAge();										//get prototypes for age

	void setName(std::string name);						//set prototypes for name
	void setColor(std::string color);					//set prototypes for color
	void setAge(int age);								//set prototypes for age

	void meow();										//Member functions prototypes for meow
	void getCatInfo();									//Member functions prototypes for getCatInfo
};
#endif // CAT_H
