#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class A
{
private:
    int a;
    int b;

    A *pimpl;

public:
    A(int a_, int b_) : a(a_), b(b_), pimpl(this) {}
    ~A() {}

    void show() { printf("%d %d\n", a, b); }
    void show_pimpl() { printf("%d %d\n", pimpl->a, pimpl->b); }

    void swap (A& rhs)
    {
        A* tmp = pimpl;
        *pimpl = *rhs.pimpl;
        *rhs.pimpl = *tmp;
    }
};

int main() {

    A a(10, 20);
    A b(100, 200);

    a.swap(b);

    a.show();
    a.show_pimpl();
 
	return 0;
}








