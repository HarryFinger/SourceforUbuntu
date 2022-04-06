#include <iostream>

int foo(int N)
{
    long long int p[N+1];
    p[0] = 0;
    p[1] = 1;
    for (size_t i = 2; i <= N; ++i)
    {
        p[i] = p[i-1] + p[i-2];
    }
    return p[N];
}

int main()
{   
    std::cout << foo(60) << std::endl;
}