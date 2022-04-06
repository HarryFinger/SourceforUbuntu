#include <iostream>
#include <string>


class A
{
    public:
    int a;
    std::string b;
    A(const int&, const std::string&);
};
A::A(const int& _a, const std::string& _b): a(_a), b(_b)
{
}

int main()
{
    A memberA(10,"asdasd");
    std::cout << "a: " << memberA.a << "\n";
    std::cout << "b: " << memberA.b << "\n";
}