


#define GYM_H_

using namespace std;
#include "Greeting.h"
#include "TeenMember.h"

class Gym :public Greeting{
public:
	Gym();
	virtual ~Gym();

	//2.Over-loading using methods
		void checkAge (); //function with no arguments
		void checkAge (int); //function with one integer argument
		void checkAge (int, double);//function with one integer and one floating arguments

	//3.Abstract class with a method
	//pure virtual method
		void sayHello();

	//13.Use of dynamic binding with virtual & non-virtual methods. Demonstrate the impact.
		void tennisMatchUpdate(TeenMember *obj);

};




