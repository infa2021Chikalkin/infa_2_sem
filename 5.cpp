#include <iostream>

//5
int main()
{
    unsigned int N;
    unsigned int min;
    std::cout << "Enter number of numbers" << std::endl;
    std::cin >> N;
    int current_number;
    std::cout << "Enter numbers" << std::endl;
    std::cin >> current_number;
    min = current_number % 101;
    for (int i = 1; i < N; ++i) {
        std::cin >> current_number;
        if (current_number % 101 < min) min = current_number % 101;
    }
    std::cout << min;
    return 0;
}
