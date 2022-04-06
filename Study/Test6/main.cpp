#include <iostream>

class Bace 
{
    public:
    int _base =1;
};

class Derived : public Bace
{
    public:
    int _derived =2123123;
};

const int a =10;

int main()
{   
    Bace A;
    
    //int* pa = new int();
    
    Derived B;
    static_cast<Bace>(B)._base;
    static_cast<Bace>(B)._base;
    std::cout << B._base <<std::endl;
}