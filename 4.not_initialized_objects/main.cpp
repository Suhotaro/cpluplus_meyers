#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class A
{
    int a;
    int b;


public:
	A(){}
	A(int a_, int b_) : a(a_), b(b_) {}
	~A() {}

    int get_a() {return a;}
    int get_b() {return b;}
};

int main(int argc, char *argv[]) {
    
    A b;

    printf("%d %d\n", b.get_a(), b.get_b());

	return 0;
}







