#include <iostream>

struct A
{
    virtual void foo()
    {
        std::cout << "111" << std::endl;
    }
};

struct B: public A
{
    void foo() override
    {
        std::cout << "222" << std::endl;
    }
};

int main()
{
    A a;
    B b;
    A* uni = &b;
    uni->foo();
}