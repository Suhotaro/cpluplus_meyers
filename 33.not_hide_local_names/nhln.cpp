#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class A {
public:
    virtual void f1() { printf("A::f1\n"); }
    virtual void f1(int n) { printf("A::f1 %d\n", n); }

    virtual void f2() { printf("A::f2\n"); }
    virtual void f2(int n) { printf("A::f2 %d\n", n); }
};

class B : public A {
public:
    using A::f1;

    virtual void f1() { printf("B::f1\n"); }
    virtual void f2() { printf("redirect\n"); A::f2(10); } /* it is prohibited to use f2 from class A, therefor redirect to A::f2 */
};

int main() {

    A a;
    a.f1();
    a.f2(5);

    B b;
    b.f1();
    b.f1(20); /* using allows to use f1 from class A*/
    b.f2();

	return 0;
}









