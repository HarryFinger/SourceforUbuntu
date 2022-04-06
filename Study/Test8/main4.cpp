#include <iostream>
#include <typeinfo>

template <typename T, typename T2>
struct is_same
{
    static const bool value = false;
};

template <typename T>
struct is_same<T,T>
{
    static const bool value = true;
};

struct B
{

};

struct C: public B{

};

struct A
{

};

int main()
{

    if(is_same<C,C>::value) std::cout << "equal"<<std::endl;
    else std::cout << "none equal" <<std::endl;
}