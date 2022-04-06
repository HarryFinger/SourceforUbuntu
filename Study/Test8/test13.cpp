#include <iostream>

class A
{
    public:
    int a;
    int* p;
    A(int _a, int* _p): a(_a), p(_p){}
    A(const A& a){}
    A(A&& a) = delete;
};

int main()
{
    A a(10, nullptr);
    A b = std::move(a);
    std::cout << b.a;
}