
#include "Member.h"

#include <iostream>
#include <string>
using namespace std;


Member::Member() {
	this->id = 0;
	this->name = " ";
	this->price = 0.00f;
	cout<< "--Member Constructor--\n"<<endl;
	Member::numberOfMember++;//15.Static states
}

Member::Member(int aId, string aName){
	this->id = aId;
	this->name = aName;
	this->price = 0.00f;
	Member::numberOfMember++;//15.Static states
}

Member::Member(int aId, string aName, string aActivity){
	this->id = aId;
	this->name = aName;
	this->activity = aActivity;
	this->price = 0.00f;
	Member::numberOfMember++;//15.Static states
}

Member::Member(int aId, string aName, float aPrice, string aActivity ){
	this->id = aId;
	this->name = aName;
	this->activity = aActivity;
	this->price = 0.00f;
	Member::numberOfMember++;//15.Static states

}
Member::Member(string aName, float aPrice, int aId){
	this->name=aName;
	this->price =aPrice;
	this->id = aId;
	Member::numberOfMember++;//15.Static states
}

Member::Member(float aPrice, int aId){
	this->price =aPrice;
	this->id = aId;
	Member::numberOfMember++;//15.Static states
}

/*
//16 Testing the difference between a C++ class and a C++ struct
Member::Member(int aId, string aName, int aTestClass){
	this->id = aId;
	this->name = aName;
	Member::numberOfMember++;//15.Static states
	this->testClass = aTestClass;
	}
*/

const string& Member::getActivity() const {return activity;}

void Member::setActivity(const string &activity) {this->activity = activity;}

int Member::getId() const {return id;}

void Member::setId(int id) {this->id = id;}

const string& Member::getName() const {return name;}

void Member::setName(const string &name) {this->name = name;}
void Member::toString(){
	std::cout <<"--Derived form Member class--\n"
			 <<"Member Id: "<<id<<"\n"
			<< "Name: " << name <<"\n"
			<<"Price: "<<price <<"\n"
			<<"Activity: "<<activity<< "\n" << endl;
}

Member::~Member() {}

//11. Correct use of three over-loaded operators (e.g., +, = and ==)
//for one of your classes.

Member Member::operator + (const Member&  a)//17. Passing an object to a method by constant reference.
											//Demonstrate the impact.
{return Member(name, price + a.price, id);}//11.a

bool Member::operator == (const Member&  a)//11.b
{
    if ((a.name == name) &&(a.price == price) &&
	(a.id == id))
    { return true; }else return false;}

//13.Use of dynamic binding with virtual & non-virtual methods.

//----Implementing virtual method----
void Member::tennisUpdate(){
		cout<<"--From Member Class--Tennis Update\n"<<endl;
	}

//15.Static states of a class and an example usage. Demonstrate the impact.
int Member::numberOfMember = 100;

int Member::getNumberOfMember(){
	return numberOfMember;
}


////16 Testing the difference between a C++ class and a C++ struct
//int Member::getTestClass() const {
//	return testClass;
//}
//
//void Member::setTestClass(int testClass) {
//	this->testClass = testClass;
//}



