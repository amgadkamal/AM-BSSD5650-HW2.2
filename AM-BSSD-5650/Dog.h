#ifndef Dog_h
#define Dog_h

#include <iostream>
#include "Animal.h"
#include "Flys.h"

class Dog : virtual public Animal {
public:
	Dog(Flys* flightType);
	void speak() override { std::cout << "Woof" << std::endl; };
	void move() override { std::cout << "walked on all fours" << std::endl; };
};


#endif // !Dog_h