#include <iostream>

class A
{
    public:
    double a1;
    A(double _a1): a1(_a1)
    {
    }
};

int main()
{
    sizeof(A);
    A* a = reinterpret_cast<A*> (new int8_t[sizeof(A)]);
    new(a)A(5.0);
    std::cout << a->a1;
}
