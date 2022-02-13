#include <iostream>
using namespace  std;

unsigned long long read_number()
{
    char symbol = ' ';
    unsigned long long x = 0;
    while (symbol != '@'){
        if (isdigit(symbol)) {
            symbol -= '0';
            x = x * 10 + symbol;
        }
        cin >> symbol;
    }
    return x;
}

int main()
{
    cout << read_number();
    return 0;
}

