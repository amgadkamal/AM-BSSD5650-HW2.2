#include <iostream>
#include "Animal.h"
#include"Flys.h"
#include "Duck.h"
#include "Dog.h"
#include<string>
using namespace std;


int main() {
    
	string animaltype,eat,flying, change_ambulation;
	int legs;

	Animal* riblet = new Dog(new CantFly());
	riblet->setFood(" filet mignon");
	std::cout << "Riblet is " << riblet->tryFlight() << std::endl;
	std::cout << "while he " << riblet->eat() << std::endl;
	delete riblet;

	//HW- point 1
	Animal* daffy = new Duck(new CanFly());
	daffy->setFood(" bread");
	std::cout << "Daffy is " << daffy->tryFlight() << std::endl;
	std::cout << "while he " << daffy->eat() << std::endl;
	delete daffy;

	//HW point 4
label:;
	//HW- point 3
	cout << "which animal you want ?"; 
	cin >> animaltype; // Get user input from the keyboard

	cout << "how many legs it should use to walk ? ";
	cin >> legs; // Get user input from the keyboard
	
	cout << "what it eats ? ";
	cin >> eat; // Get user input from the keyboard

	cout << " can or can't fly ? ";
	cin >> flying; // Get user input from the keyboard
	cout << "the animal you choose is :  " << animaltype << " with  " << legs << " legs and it eats " << eat <<" ,and it "<< flying << " fly."; ;
	
	cout << " do you want to change  ?(yes or no) ";
	cin >> change_ambulation; // Get user input from the keyboard

	//HW point 4 and 5
	if (change_ambulation ==  "yes") {
       goto label;
	}


	return 0;
}