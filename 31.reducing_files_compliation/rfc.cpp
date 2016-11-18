#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class B
{
public:
    B(int n) { num = n; }
    B() {}

    int num;

    void show() { printf("num:%d\n", num); }
};

class A
{
B *b;

public:
    A(B *b_ = new B(5)) : b(b_) {}
    
    void show() { b->show(); }
};


int main() {
    
    A a;
    a.show();

	return 0;
}









