

#ifndef MEMBER_H_
#define MEMBER_H_

#include <iostream>
using namespace std;
#include "OffPickMember.h";
#include "TeenMember.h";

class Member:public OffPickMember, public TeenMember  {


//	//16 Testing the difference between a C++ class and a C++ struct
//
//		int testClass;//default state of a class
//
//		int getTestClass() const;
//
//		void setTestClass(int testClass);
//
//


private://1. Correct use of all access specifiers (private).
	string activity;
	static int numberOfMember;//15.Static states of a class

protected://1. Correct use of all access specifiers (protected).
	int id;
	string name;
	float price;

public://1. Correct use of all access specifiers (public).
	Member();
	Member(int, string);
	Member(int, string, string );
	Member(int, string, float, string );
	Member(string,float, int );
	Member(float, int );
	virtual ~Member();

	const string& getActivity() const;
	void setActivity(const string &activity);
	int getId() const;
	void setId(int id);
	const string& getName() const;
	void setName(const string &name);

	void toString();

	//11. Correct use of three over-loaded operators
	//11.a
	Member operator + (const Member& m);	//17. Passing an object to a method by
											//constant reference. Demonstrate the impact.
	bool operator == (const Member& m);//11.b

	//13.	Use of dynamic binding with virtual & non-virtual methods.
	//----virtual method----
	 void tennisUpdate();

	//15.Static states of a class and an example usage. Demonstrate the impact.
	static int getNumberOfMember();


};



#endif /* MEMBER_H_ */
