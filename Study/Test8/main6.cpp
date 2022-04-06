#include <iostream>

template<typename T>
class C
{
    C() = delete; 
};

template <typename T>
void foo (T a) 
{

}

class B
{

};

int main()
{
        foo<>(4);
        const int x = 10;
        int& a = x;
}