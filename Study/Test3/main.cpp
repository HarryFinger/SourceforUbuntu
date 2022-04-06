#include <iostream>

int main()
{
    int* pa = new int[10];
    for (size_t i = 0; i < 10; i++)
    {
        pa[i] = i;
    }

    for (size_t i = 0; i < 10; i++)
    {
        if(pa[i]%2 == 0) std::cout << pa[i] << std::endl;
    }
}