#include <iostream>

template <typename T>
class Smart_ptr
{
    private:
    T* ptr;
    public: 
    Smart_ptr(T* _t):ptr(_t){std::cout << "Constructed"<< std::endl;}
    ~Smart_ptr(){
    delete ptr;
    std::cout << "Destructed!" << std::endl;
    }
    
    T& operator [] (const int N)
    {
        return ptr[N];
    }
};

int main()
{
    Smart_ptr<char> a = new char[10];
    a[2] = 'b';
    std::cout << a[2] << std::endl;
}