#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class A
{
public:
	A() {}
	~A() {}
    
    void foo() { printf("A\n"); }
};

class B : public A
{
public:
	B() {}
	~B() {}
    
    void foo() { printf("B\n"); }
};

void bar( A ptr )
{
    ptr.foo();
}

int main() 
{
    A a;
    B b;

    bar(a);
    bar(b);

	return 0;
}







