

#include "Gym.h"

#include <iostream>
#include <string>
using namespace std;

Gym::Gym() {
	cout << "!!!Hello From gym !!!" << endl; //
}

//2.Over-loading using methods
void Gym::checkAge ( ) //2.function with no arguments
	{
	  int a = 12;
	  cout <<"Person's age is: "<< a << endl;
	}
void Gym::checkAge (int a ) //2.function with one integer argument
	{
	  cout <<"Person's age is: "<< a << endl;
	}
void Gym::checkAge (int a, double price) //2.function with one integer
										//and one floating arguments
	{
	if(a >= 13){
		cout <<"Person can take an admission.\n"
						"Price is: " << price << endl;
	}else cout <<"Person can't take an admission"<< endl;

	}

//3.Abstract classes with a method
//pure virtual method
void Gym::sayHello(){
	cout<<"Derived for Abstract class:\nWelcome to Dublin's Best Health Clubs"<<endl;
}

//13.Use of dynamic binding with virtual & non-virtual methods. Demonstrate the impact.
void Gym::tennisMatchUpdate(TeenMember *tmobj){
	tmobj->tennisUpdate();
}

Gym::~Gym() {

}


