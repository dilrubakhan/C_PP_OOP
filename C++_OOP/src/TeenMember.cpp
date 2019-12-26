
#include "TeenMember.h"

#include <iostream>
#include <string>
using namespace std;

TeenMember::TeenMember() {
	this->isWeekend = true;
	cout<<"--Teen-Member Constructor--"<<endl;}

TeenMember::TeenMember(bool aIsWeekend) {
	this->isWeekend = true;}

//10. A working destructor with some basic functionality
TeenMember::~TeenMember() {
	cout<<"--Teen Member destroyed--"<<"\n"<< endl;
}

bool TeenMember::isIsWeekend() const {return isWeekend;}

void TeenMember::setIsWeekend(bool isWeekend) {this->isWeekend = isWeekend;}

//8.An example of an object passing itself to a function
void TeenMember::permisionPool(TeenMember tm){

	if (tm.isWeekend) {
		cout<<"The Teen Member is allowed to go in the pool \n"<<endl;
	} else if(!tm.isWeekend) {
		cout<<"The Teen Member is not allowed to go in the pool \n"<<endl;
	}
}



//13.Use of dynamic binding with virtual & non-virtual methods.

//---Implementing virtual method----
void TeenMember::tennisUpdate(){
			cout<<"--From TeemMember Class--Tennis Update \n"<<endl;
		}

