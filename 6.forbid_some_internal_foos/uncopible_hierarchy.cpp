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

class B {
    int c;

public:
    B(int c_) : c(c_) {}
    ~B() {}

    void show() { printf(" %d\n", c); }
};

class A : public B, private uncopible
{
    int a;
    int b;

public:
	A(int a_ = 0, int b_ = 1, int c_ = 2) : B(c_), a(a_), b(b_) {}
	~A() {}

    void show() { printf("%d %d", a, b);  B::show(); }
};

int main(int argc, char *argv[]) {

    A a(1, 2, 3);
    A b(4, 5, 6);

    a.show();
    b.show();

//    b = a;

	return 0;
}

