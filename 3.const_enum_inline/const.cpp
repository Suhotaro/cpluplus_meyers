#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class A
{
	string name;
	int age;

public:
	A() {}
	~A() {}
	A(string name_, int age_) : name(name_), age(age_) { printf("create\n"); }

	void operator ()()
	{
		printf("general method\n");
		static_cast<const A&> (*this)();
	}

	void operator ()() const
	{
		printf("const method\n");
	}
};

int main(int argc, char *argv[]) {

	class A a("Bob", 25);
	const class A b("Alice", 25);

	a();
	b();

	return 0;
}
