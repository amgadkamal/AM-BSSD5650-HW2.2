#ifndef Duck_h
#define Duck_h

#include "Animal.h"
#include <iostream>
#include "Flys.h"

class Duck :virtual public Animal {
public:
	Duck(Flys* flightType);
	void speak() {
		std::cout << "Quacktastic" << std::endl;
	};
	//void eat() {
		//std::cout << "ate Bread" << std::endl;
	//};
	void move() override { std::cout << " fly" << std::endl; };

};
#endif // !Duck_h
