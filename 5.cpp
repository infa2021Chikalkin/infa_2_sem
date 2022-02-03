#include <iostream>

//5
int main()
{
    unsigned int N;
    unsigned int min;
    int current_number;
    std::cout << "Enter numbers" << std::endl;
    std::cin >> current_number;
    min = current_number % 101;
    while (std::cin >> current_number) {
        if (current_number % 101 < min) min = current_number % 101;
    }
    std::cout << min;
    return 0;
}
