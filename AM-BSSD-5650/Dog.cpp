#include "Dog.h"

void lick() {
	std::cout << "licked";
}
Dog::Dog(Flys* flightType) {
	this->setFly(flightType);

}