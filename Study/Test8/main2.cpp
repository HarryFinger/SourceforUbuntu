#include <iostream>

struct A{
    virtual void foo()
    {
        std::cout << "111" <<std::endl;
    }
};

struct B: public A{
    private:
    void foo() override
    {
        std::cout << "222" <<std::endl;
    }
};

int main()
{
    int x;
    std::cin >> x;
    A a;
    B b;
    A& bb = x < 0 ? a : b;
    bb.foo();
}