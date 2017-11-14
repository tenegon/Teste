#ifndef C_H
#define C_H
#include "B.cpp"

using namespace std;

class C : public B{
	private:
		string c;
	protected:
	public:
		C() : B(), c("c"){};
		void print(){ B::print(); cout << c << endl;}
};
#endif
