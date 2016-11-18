#include <iostream>
#include <string>
#include <stdio.h>
#include <memory>

class A
{
private:
    int a;

public:
	A() {}
	A(int a_) : a(a_) {}
	~A() {}
    
    A (A&& ptr) : A(std::move(ptr.a)) {}
    A& operator=(A&& ptr) 
    {
        a = std::move(ptr.a);

        return *this;
    }

    int get_a() { return a; }
};

int get_priority() 
{
    return 42; 
}

void foo(std::unique_ptr<A> ptr, int priority)
{
    ptr->get_a();
}

int main() 
{

//#define GOOD_CODE

#ifndef GOOD_CODE
    /* If get_priority is called secondary and get_priority will lead ot
     * exeption then new ptr memory will be lost
     */
    foo(std::unique_ptr<A> (new A(42)), get_priority());

#else

    std::unique_ptr<A> ptr = std::unique_ptr<A>(new A(42));
    int priority =  get_priority();

    foo( ptr, priority);

#endif


	return 0;
}







