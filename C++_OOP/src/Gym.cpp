

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

Gym::~Gym() {

}


