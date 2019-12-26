
/*
 * Application.cpp
 *
 *  Created on: Dec 26, 2019
 *      Author: Dilruba Khan
 */

#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>

#include "Gym.h"
#include "Member.h"
#include "OffPickMember.h"
#include "GymClassStorage.cpp"


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

	//14.Correct use of new and delete for the allocation of an object/objects,
	//with operations on the object using pointers.

	cout <<"---------use of new and delete---------------"<<endl;
				OffPickMember *opm = new OffPickMember;
								opm->useOfNewAndDelete();
								delete opm;
	cout <<"---------End of use of new and delete-------"<<endl;

	//15.Static states of a class and an example usage. Demonstrate the impact.
				cout <<"------.Static states of a class-----"<<endl;
				Member statMem;
				statMem.setId(110);
				statMem.setName("Static Member");
				statMem.setActivity("Badminton");
				statMem.toString();
				int memNum = Member::getNumberOfMember();
				cout<<"Number of Member is: "<<memNum<<"\n"<<endl;

				//16.Demonstrates the difference between a C++ class and a C++ struct.

							cout <<"------Difference between class and struct-----"<<endl;
							g.setTestStruct(1000);

							cout<<"Test Struct int value is: "<< g.getTestStruct()<< "\n"<<endl;

				//			statMem.setTestClass(10000);
				//			cout<<"Test Class int value is: "<< statMem.getTestClass()<< "\n"<<endl;

	//17. Passing an object to a method by constant reference. Demonstrate the impact.

	cout <<"------Passing object by constant reference-----\n"<<endl;

							Member cr = Member(123, "Dilruba", "Tennis");
								   cr.operator +(cr);
								   //cr.activity = "Badminton";				// Giving error: within this context
									cr.toString();

	//18 Write a straightforward example class template.

	cout <<"-----------class template---------"<<endl;

						GymClassStorage <int> intArray;					//11.C- Correct use of three over-loaded operators
								for (int i = 0; i <5; i++)
									{
									intArray[i] = i * i;
									cout << " Int Array value is:  " << intArray[i] <<"\n"<< endl;
									}

	//19.Use of the vector container to contain a number of objects of one of your classes.

	cout <<"-----Vector container to contain a number of objects------"<<endl;

						Member *member1= new Member(111, "Vector Member", "Tennis"  );
						Member *member2= new Member(112, "Vector2 Member", "Football"  );
						Member *member3= new Member(113, "Vector3 Member", "Basketball"  );

						vector <Member> memVector ;//Declare the Member type of vector

										memVector.push_back(*member1);
										memVector.push_back(*member2);
										memVector.push_back(*member3);

						vector<Member>::iterator it;//an iterator loop through the vector
										for ( it = memVector.begin(); it != memVector.end(); ++it ) {

										// For each Member, print out their info
										       it->toString();}

		cout <<"-------------Vector end-------------\n"<<endl;

//20 Use of an algorithm on your container.
				cout <<"--------20 Use of an algorithm---------"<<endl;
				 int xx, xy, xz;
				 xx = 10;
				 xy = 22;
				 xz = 34;
				 vector<int> vect;  // declare a vector container of ints
				 vect.push_back(xx);
				 vect.push_back(xy);
				 vect.push_back(xz);

				// loop through vector with for_each loop and execute
				// outputAlgorithm() for each element
				for_each(vect.begin(), vect.end(), outputAlgorithm);

}



