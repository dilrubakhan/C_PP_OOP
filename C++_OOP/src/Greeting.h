

#ifndef GREETING_H_
#define GREETING_H_
#include<string>
#include<iostream>

//3.Abstract classes with a method
class Greeting {

public:
	Greeting();

	//3.Abstract classes with a method
	//pure virtual method
	virtual void sayHello() = 0;
	//5.Over-riding of a method of an abstract class.
	virtual void getOffer();



	virtual ~Greeting();

};

#endif /* GREETING_H_ */
