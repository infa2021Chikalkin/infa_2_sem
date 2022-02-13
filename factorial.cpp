#include <iostream>
using namespace std;

long long factorial(unsigned int n)
{
    if (n == 1) return 1;
    else return n*factorial(n-1);
}
int main()
{
    unsigned int n;
    cout << "Enter the number" << endl;
    cin >> n;
    unsigned long long f;
    f = factorial(n);
    cout << n << "! = " << f;
}
