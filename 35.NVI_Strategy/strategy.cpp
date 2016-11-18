#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class GameCaracter;

class Health
{
public:
    virtual ~Health() {}
    virtual void calc(const GameCaracter& gc) = 0;
};

class DeafultHealth : public Health
{
public:
    virtual void calc(const GameCaracter& gc)
    {
        printf("DeafultHealth calc\n");
    }
};

class GameCaracter
{
    Health *h;
public:
    explicit GameCaracter (Health *h_ = new DeafultHealth) : h(h_)
    {
    }

    void do_calc() 
    {
        h->calc(*this);
    }
};

int main()
{
    GameCaracter gc;
    gc.do_calc();

	return 0;
}








