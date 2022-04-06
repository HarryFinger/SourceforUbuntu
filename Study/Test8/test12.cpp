#include <iostream>

int main()
{
    int a = 7;
    a &= ~(1u<<1);
    std::cout << a;
}