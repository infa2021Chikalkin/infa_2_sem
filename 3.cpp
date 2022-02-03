#include <iostream>

//3
int main()
{
    int x;
    int y;
    std::cout << "Enter x" << std::endl;
    std::cin >> x;
    std::cout << "Enter y" << std::endl;
    std::cin >> y;
    int z = 1;
    for (int i = 0; i < y; ++i) {
        z *= x;
    }
    std::cout << "x^y = " << z << std::endl;
    return 0;
}