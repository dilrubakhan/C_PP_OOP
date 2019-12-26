

#include <iostream>
using namespace std;

#include "OffPickMember.h";
#include "TeenMember.h";

class Member:public OffPickMember, public TeenMember {

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

