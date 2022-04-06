#include <iostream>

int Fac(int N)
{
    static int count = 1;
    if (!N) return count; 
    count *=N;
    std::cout << N << std::endl;
    return Fac(--N);
}

int main(){
    std::cout << Fac(5)<< "\n";
}