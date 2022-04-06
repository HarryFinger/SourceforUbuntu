#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string filename = "test.txt";
    std::fstream f(filename);
    if (!f.is_open())
    {
        std::cout<< "failed" <<std::endl;
        return 1;
    }
    int a,c;
    std::string b;
    //f.write(reinterpret_cast<char*>(&i), sizeof i);
    f << 123 << "lol" << "asd";

    f.seekp(0);

    f >> a >> b >>c;

    std::cout << a << ' ' << b << ' ' << c << std::endl;
     
    f.close();
    return 0;
}