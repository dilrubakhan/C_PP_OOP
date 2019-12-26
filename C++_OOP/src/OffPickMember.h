

#ifndef OFFPICKMEMBER_H_
#define OFFPICKMEMBER_H_



class OffPickMember {

private:
	double price;


public:
	OffPickMember();
	OffPickMember(double);

	double getPrice() const;
	void setPrice(double price);
	void toString();

	//9:  Copy Constructor
	OffPickMember(const OffPickMember &copyOffPickMember);

	//10. A working destructor with some basic functionality
	//This method will run only pointer operation because the way its store its memory
	virtual ~OffPickMember();

	//14.Correct use of new and delete for the allocation of an
	//object/objects, with operations on the object using pointers.
	void useOfNewAndDelete();

	//17.Passing an object to a method by constant reference.

};

#endif /* OFFPICKMEMBER_H_ */
