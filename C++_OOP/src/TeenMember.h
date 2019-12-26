

#ifndef TEENMEMBER_H_
#define TEENMEMBER_H_

class TeenMember {

	private:
		bool isWeekend;

public:
	TeenMember();
	TeenMember(bool);

	bool isIsWeekend() const;
	void setIsWeekend(bool isWeekend);

	//8.An example of an object passing itself to a function (not part of a class)
	void permisionPool(TeenMember tm);

	//10. A working destructor with some basic functionality
	virtual ~TeenMember();



	//13.Use of dynamic binding with virtual & non-virtual methods.

	//----virtual method----
	virtual void tennisUpdate();


};

#endif /* TEENMEMBER_H_ */
