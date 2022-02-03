#include <iostream>

//2
int main()
{
    int n;
    std::cout << "Enter number of symbols" << std::endl;
    std::cin >> n;
    char a;
    if (n % 5 == 0) a = '@';
    else a = '%';
    for (int i = 0; i < n; ++i) {
        std::cout << a << ' ';
    }
    return 0;
}
