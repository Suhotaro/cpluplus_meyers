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

    int get_a() {return a;}
    int get_b() {return b;}
/*
    A operator* (A rhs) const
    {
        return A(a * rhs.get_a(), b * rhs.get_b());
    }
*/
};

A operator* (A lhs, A rhs)
{
    return A(lhs.get_a() * rhs.get_a(), lhs.get_b() * rhs.get_b());
}

int main(int argc, char *argv[]) {

    A a(2, 3);
    A b(3, 4);

    A c = a * b;
    printf("%d %d\n", c.get_a(), c.get_b());

    c = a * 5;
    printf("%d %d\n", c.get_a(), c.get_b());

    c = 5 * b;
    printf("%d %d\n", c.get_a(), c.get_b());

	return 0;
}







