

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
	Member(int, string, string );

	virtual ~Member();
	const string& getActivity() const;
	void setActivity(const string &activity);
	int getId() const;
	void setId(int id);
	const string& getName() const;
	void setName(const string &name);
	//ToString method
	void toString();
};

#endif /* MEMBER_H_ */
