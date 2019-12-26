

#include "Greeting.h"
#include <iostream>
#include <string>
using namespace std;
//3.Abstract classes with a method
Greeting::Greeting() {}
Greeting::~Greeting() {}
//5.Over-riding of a method of an abstract class.
void Greeting::getOffer(){
	 cout <<"Try 4 days for free:"<< endl;
}
