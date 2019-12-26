
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
#include "OffPickMember.h"


int main() {

	//*1. Correct use of all access specifiers (public, private, protected).
		Member *mem1 = new Member(110, "David",  "Tennis");
		mem1->toString();

		//--end-- 1.
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

	//*5.Over-riding of a method of an abstract class.

				cout <<"--------Over-riding of a method--------"<<endl;
						g.getOffer();

	//*6.Multiple inheritance
				cout <<"--------Multiple inheritance --------"<<endl;
				Member mm;
					   mm.permisionPool(mem1);	//calling Member class, method driving from base TeenMember

	//*8.An example of an object passing itself to a function (not part of a class)
				cout <<"------8.an object passing itself to a function ------"<<endl;
				TeenMember tm;
					   	   tm.setIsWeekend(false);
					   	   tm.permisionPool(tm);
					   		//or
					   		tm.setIsWeekend(true);
					   		tm.permisionPool(tm);

	//*9.A class with a modified copy constructor and demonstrate the effect of this
	//on pass-by-value and pass-by-reference calls.

	//9.A pass-by-value call
				OffPickMember op(60.00);
					   		  op.toString();

	//Copy Constructor
	cout<<"---- Copy constructor.------\n"<<endl;

	// 9.B pass-by-reference call
				OffPickMember op2 = op;
				op2.toString();


}



