#include <iostream>

template<typename T>
void foo() = delete;

int main()
{
    int&& x = 100;
    foo<decltype(x)>();
}