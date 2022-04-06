#include <iostream>
#include <array>
#include <vector>

constexpr int foo(int& a)
{
    std::vector<int> v2;

    return a*a;
}
int main(){
    std::vector<int> v;

    int n = 100;
    foo(n);
}