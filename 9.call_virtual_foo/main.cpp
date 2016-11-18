#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class A
{
public:
	A() { foo(); }
	~A() {}

    virtual void foo() { printf("AAA\n"); }
};

class B : public A
{
public:
	B() { foo(); }
	~B() {}

    void foo() { printf("BBB\n"); }
};

int main() 
{
    A a;
    B b;

	return 0;
}







