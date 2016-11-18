#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class A
{
    int a;
    int b;

public:
	A(int a_ = 0, int b_ = 1) : a(a_), b(b_) {}
	~A() {}

    const A& operator= (A rhs)
    {
        printf("copy assignment\n");

        if (this == &rhs)
            return *this;

        a = rhs.a;
        b = rhs.b;

        return *this;
    }

    int get_a() { return a; }
    int get_b() { return b; }
};

int main() 
{
    A a(2, 3);
    A b(3, 4);

    b = a;
    printf("%d %d\n", b.get_a(), b.get_b());

	return 0;
}


