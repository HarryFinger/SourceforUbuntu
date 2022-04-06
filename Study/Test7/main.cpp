#include <iostream>
#include <vector>

class A
{
};

class AB: public A
{
};

class AC: public A
{
};

int main()
{
    A* pa = new A();
    AB* pab = new AB();
    AC* pac = new AC();

    std::vector<A*> v = { pa, pab, pac };
    for(auto it : v)
    {
        if (static_cast<AB*>(it)!=nullptr)
        std::cout << "well_done" << std::endl;
        else 
        std::cout << "failed" << std::endl;
    }
}