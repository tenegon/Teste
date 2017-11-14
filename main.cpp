#include <iostream>
#include <cstdlib>
#include <cmath>
#include "A.cpp"
#include "B.cpp"
#include "C.cpp"

using namespace std;

int main(int argc, const char * argv[])
{
	A *a = new A();
	a->print();
	B *b = new B();
	b->print();
	C *c = new C();
	c->print();
	return 0;
}

