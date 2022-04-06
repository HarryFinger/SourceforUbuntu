#include <iostream>

void print(){}
template<typename Head, typename... Tail>
void print(const Head& head, const Tail... tail)
{
    std::cout << head << std::endl;
    print(tail...);
}

int main(){
    print(1,2,3, "asd");
}