#ifndef B_H
#define B_H
#include "A.cpp"

using namespace std;

class B : public A{
	private:
		string s;
	protected:
	public:
		B() : A(), s("b"){};
		void print(){ A::print(); cout << s << endl;}
};
#endif
