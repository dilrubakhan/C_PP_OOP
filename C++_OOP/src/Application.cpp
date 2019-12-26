
/*
 * Application.cpp
 *
 *  Created on: Dec 26, 2019
 *      Author: Dilruba Khan
 */

#include <iostream>
using namespace std;

#include "Gym.h"
#include "Member.h"


int main() {
	/*2.Over-loading using methods */
			Gym g;
				g.checkAge();
				g.checkAge(18);
				g.checkAge(20, 80);

				cout <<"------------------------"<<endl;

	/*3.Abstract classes with a method that is required in all derived classes*/
				g.sayHello();

				cout <<"------------------------"<<endl;

	//*4.Operations on pointers to an object.

				Member mem2(111,"Brín", "Swimming");

				cout <<"---Operations on pointers to an object----"<<endl;

						mem2.toString();

				cout <<"--Using same value using pointers on Member object's--\n"<<endl;

				Member *ptrMem;				// Declare pointer to a class.
						ptrMem = &mem2;		// Save the address of the object
						ptrMem->toString();


		return 0;
}



