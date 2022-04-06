#include <iostream>

class A
{
    public:
    void fa(){std::cout << "CLASS A"<<std::endl;}
};
class B: public A
{
    public:
    void fa(){std::cout << "CLASS B" <<std::endl;}
};

void foo(A& _A)
{
    _A.fa();
}

int main()
{
    B b1;
    foo(b1);
}