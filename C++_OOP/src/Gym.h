


#define GYM_H_

using namespace std;

class Gym {
public:
	Gym();
	virtual ~Gym();

	//2.Over-loading using methods
		void checkAge (); //function with no arguments
		void checkAge (int); //function with one integer argument
		void checkAge (int, double);//function with one integer and one floating arguments
};




