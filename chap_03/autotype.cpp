#include <iostream>

int main()
{
    int a = 10;
    auto b = 10;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    b += a;
    std::cout << "b + a: " << b << std::endl;
    return 0;
}