#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class A
{
public:
   virtual void show() = 0;
   virtual void show_all() = 0;
};

class B
{
public:
   virtual void show() { printf("show\n"); }
//   virtual void show_all() { printf("show_all\n"); }
};

int main() {
    
    B b;
    b.show();
//    b.show_all();

	return 0;
}









