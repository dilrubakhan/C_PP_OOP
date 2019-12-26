

#ifndef MEMBER_H_
#define MEMBER_H_

#include <iostream>
using namespace std;

class Member {

private:			//1. Correct use of all access specifiers (private).
	string activity;

protected:			//1. Correct use of all access specifiers (protected).
	int id;
	string name;
public:				//1. Correct use of all access specifiers (public).
	Member();
	virtual ~Member();
};

#endif /* MEMBER_H_ */
