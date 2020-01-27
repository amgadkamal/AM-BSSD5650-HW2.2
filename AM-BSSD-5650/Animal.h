#ifndef Animal_h
#define Animal_h

#include <iostream>
#include "Flys.h"
class Animal {
public:
	// pure virtual function
	virtual~Animal() {};
	virtual void move() = 0;
	virtual void speak() = 0;
	

	virtual void setFly(Flys* flyType) {
		_flyingType = flyType;
	};

	virtual std::string tryFlight() {
		return _flyingType->fly();
	}

	virtual void setFood(std::string comestible)

	{
		_food = comestible;

	}
	virtual std::string eat() {
		return "ate" + _food;
	}
	

private:
	Flys* _flyingType;
	std::string _food;
};
#endif // !Animal_h