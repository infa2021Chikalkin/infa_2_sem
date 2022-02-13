#include <iostream>
using namespace std;

bool checking_simplicity(unsigned int n, unsigned int m);
bool checking_prime(unsigned int n);
void next_prime();
void reset();

unsigned int current_number = 1;

bool checking_simplicity(unsigned int n, unsigned int m)
{
    if ((n % m == 0) && (n > m)) return false;
    else if (m < n - 1) return checking_simplicity(n, m + 1);
    else return true;
}

bool checking_prime(unsigned int n)
{
    if (n == 1) return false;
    else if (n == 2) return true;
    else if (checking_simplicity(n,2)) return true;
    else return false;
}

void next_prime()
{
    while (checking_prime(++current_number) == false){}
    cout<<current_number << endl;
}

void reset()
{
    current_number = 1;
}

int main()
{
    unsigned int n;
    cout<<"Enter the number of simply numbers" << endl;
    cin >> n;
    for (int i = 0; i < n; ++i) {next_prime();}
    reset();
    for (int i = 0; i < n-1; ++i) {next_prime();}
    return 0;
}
