#include <iostream>

class Base{
    public:
    virtual ~Base() = 0;
};
    Base::~Base(){}

class Derived: public Base{

};

int main()
{
    Base b;
    Derived d;

}