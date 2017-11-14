#include <iostream>

using namespace std;

class A{
	private:
		float a;
	protected:
	public:
		A() : a(0){};
		void print(){ cout << "A->print()" << endl;}
};
