#include <iostream>

template <int N>
struct A
{
    static const int value = A<N-1>::value + A<N-2>::value;
};

template<>
struct A<1>
{
    static const int value = 1;
};

template<>
struct A<0>
{
        static const int value = 0;
};

int main()
{   
    std::cout << A<30>::value << std::endl;
}