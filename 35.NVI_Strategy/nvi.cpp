#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class A
{  
public:
    /* NVI */
    void show()
    {
        printf("show\n");
        do_show();
    }

    virtual void do_show() = 0;
};

class B: public A
{
public:
    virtual void do_show() { printf("do B show\n"); }  
};


class C: public A
{
public:
    virtual void do_show() { printf("do C show\n"); }  
};

int main() {

    B a;
    a.show();

    C b;
    b.show();

	return 0;
}








