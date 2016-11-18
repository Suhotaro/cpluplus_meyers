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

    A& operator= (const A& rhs)
    {
        printf("copy assignment\n");

        a *= rhs.a;
        b *= rhs.b;

        return *this;
    }

    int get_a() {return a;}
    int get_b() {return b;}
};



int main(int argc, char *argv[]) {

    A a(1, 3);
    A b(2, 6);

    b = a;

    printf("%d %d\n", b.get_a(), .get_b());


	return 0;
}







