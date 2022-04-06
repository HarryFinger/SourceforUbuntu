#include <iostream>

int main(){
    char* a = "HELLO";
    char* b = "asdasd";
    while((*a++ = *b++));
    //std::cout << *a;
}