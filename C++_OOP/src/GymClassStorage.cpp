#include <iostream>
using namespace std;

template <class T>
class GymClassStorage {

	T values[];

 public:
	//11.C- Correct use of three over-loaded operators
	T& operator [](int index)
		{
			return values[index];
		}
};


