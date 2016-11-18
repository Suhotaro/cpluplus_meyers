#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class uncopible
{
protected:
     uncopible() {}
     ~uncopible() {}

private:
     uncopible (const  uncopible&);
     uncopible& operator= (const  uncopible&);
};


class A : private uncopible
{
    int a;
    int b;

public:
	A(int a_ = 0, int b_ = 1) : a(a_), b(b_) {}
	~A() {}

    int get_a() {return a;}
    int get_b() {return b;}
};

int main(int argc, char *argv[]) {

    A a(1, 3);
    A b(2, 6);

    b = a;

    printf("%d %d\n", b.get_a(), b.get_b());

	return 0;
}







