
#include "OffPickMember.h"

#include <iostream>
#include <string>
using namespace std;

OffPickMember::OffPickMember() {
	cout<<"--Off-Pick-Member Constructor--"<<endl;
	this->price = 0.0;
}

OffPickMember::OffPickMember(double aPrice){
	this->price = aPrice;}



double OffPickMember::getPrice() const {return price;}

void OffPickMember::setPrice(double price) {this->price = price;}

//9:copy constructor
OffPickMember::OffPickMember(const OffPickMember &copyOffPickMember){
	price = (copyOffPickMember.price - 10);
}
void OffPickMember::toString(){
	cout<<"The Off-Pick Member price is: "<< price << "\n"<<endl;
}

//10. A working destructor with some basic functionality
OffPickMember::~OffPickMember() {
	cout<<"---Off-Pick Member destroyed---"<<"\n"<<endl;
}

//14.Correct use of new and delete for the allocation of an
//object/objects, with operations on the object using pointers.
void OffPickMember::useOfNewAndDelete(){
	cout<<"Use of new and delete using pointers.\n"<<endl;
}

//17.Passing an object to a method by constant reference.


