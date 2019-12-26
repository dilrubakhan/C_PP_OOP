

#include "Member.h"

Member::Member() {
	this->id = 0;
	this->name = " ";
}

Member::Member(int aId, string aName, string aActivity) {
	this->id = aId;
	this->name = aName;
	this->activity = aActivity;
}
Member::~Member() {

}

const string& Member::getActivity() const {
	return activity;
}

void Member::setActivity(const string &activity) {
	this->activity = activity;
}

int Member::getId() const {
	return id;
}

void Member::setId(int id) {
	this->id = id;
}

const string& Member::getName() const {
	return name;
}

void Member::setName(const string &name) {
	this->name = name;
}

//Implementing toString method
void Member::toString(){
	std::cout <<"--Derived form Member class--\n"
			 <<"Member Id: "<<id<<"\n"
			<< "Name: " << name <<"\n"
			<<"Activity: "<<activity<< "\n" << endl;
}
