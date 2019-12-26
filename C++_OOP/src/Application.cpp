
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

	//10. A working destructor with some basic functionality on one of your
	//classes. Demonstrate it working in your main() function.

	cout<<"---- Destructor Working------\n"<<endl;
				Member m3;

	//11. Correct use of three over-loaded operators (e.g., +, = and ==)
	//for one of your classes.

	cout<<"---- over-loaded + operator ------\n"<<endl;
				Member a = Member(444.00, 444);

				Member b = Member("Dilruba", 222.50, 123);

				Member d = b + a; //11.a
					   d.toString();

	cout<<"---- over-loaded + operator ------\n"<<endl;

				Member c = Member("Dilruba", 222.50, 123);


	cout<<"---- over-loaded == operator ------\n"<<endl;
				if (b == c) { cout << "b and c are equal!" << "\n" <<endl; }//11.b

	//12. Use of all four C++ explicit style casts.
	cout<<"----Use of all four C++ explicit style casts------\n"<<endl;

	//12.A - Static-cast
				OffPickMember op1;
					op1.setPrice(39.996666666666);
						double x = op1.getPrice();
						float foatPrice;
						foatPrice = (float)(x);//Static-case-- changing double to float

	//Checking if its really changing its type
						if (foatPrice == 39.996666666666)
							printf("Its not a float value");

							else if (foatPrice == 39.996666666666f)//float

							        printf("Its a float value \n");
							 else printf("ELSE");

	cout<< "Float value of price is: "<< foatPrice <<"\n"<<endl;

	//12.B - Dynamic_cast

	cout<< "--12.B - Dynamic_cast-- "<<endl;

				Member drivedMem;
				TeenMember *dtm = dynamic_cast<TeenMember*>(&drivedMem);	//dynamic cast
							dtm->tennisUpdate();							//From Member class calling tennisUpdate
																			//which is actually TeenMember's method

	//12.C - Const_cast

	cout<< "--12.C - Const_cast-- " <<endl;

				const Member* cm = new Member;
				Member* cm2 = const_cast<Member*>(cm);
						cout<< "--Const_cast value is-- "<<cm2 <<"\n"<<endl;
						delete cm;

	//12.d - Reinterpret_cast

	cout<< "--12.d - Reinterpret_cast-- \n" <<endl;
				float* floatValue = new float(100.00f);
				char* chValue = reinterpret_cast<char*>(floatValue);
				cout <<"***********"<<chValue << endl;

	//13.Use of dynamic binding with virtual & non-virtual methods.

	cout<<"---- Dynamic binding with virtual & non-virtual methods ------\n"<<endl;

				g.tennisMatchUpdate(new TeenMember);//static binding
				g.tennisMatchUpdate(new Member);



}



