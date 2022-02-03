#include <iostream>

//4
int main()
{
    int N;
    int min;
    std::cout << "Enter number of numbers" << std::endl;
    std::cin >> N;
    int current_number;
    std::cout << "Enter numbers" << std::endl;
    std::cin >> min;
    for (int i = 1; i < N; ++i) {
        std::cin >> current_number;
        if (current_number < min) min = current_number;
    }
    std::cout << min;
    return 0;
}
