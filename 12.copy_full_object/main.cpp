#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class A
{
private:
    int a;

public:
	A(int a_ = 1) : a(a_) {}
	~A() {}
    
    int get_a() { return a; }
};

class B : public A
{
private:
    int b;

public:
	B(int a_ = 1, int b_ = 2) : A(a_), b(b_) {}
	~B() {}

	B(const B& rhs) /* : A(rhs) not fully coppied object */
    {
        b = rhs.b;
    }

    void foo() { printf("B: %d %d\n", get_a(), b); }
};


int main() 
{
    B x(10, 20);
    B y(x);

    y.foo();

	return 0;
}







