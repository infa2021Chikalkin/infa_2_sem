#include <iostream>

//6
int main()
{
    unsigned int current_len = 1;
    unsigned int max_len = 0;
    int previous_number;
    int current_number;
    std::cout << "Enter the numbers" << std::endl;
    std::cin >> previous_number;
    while (std::cin >> current_number) {
        if (current_number > previous_number) current_len += 1;
        else if (current_len > max_len) {
            max_len = current_len;
            current_len = 1;
        }
        else current_len = 1;
        previous_number = current_number;
    }
    if (current_len > max_len) max_len = current_len;
    std::cout << "The largest number is " << max_len << std::endl;
    return 0;
}