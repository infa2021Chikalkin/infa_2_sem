#include <iostream>
using namespace std;

int conversion(int n)
{
    unsigned int r;
    r = n % 2;
    if (n / 2 == 0) return r;
    else return r + 10 * conversion(n / 2);
}
int main()
{
    unsigned int n;
    cout << "Enter the number" << endl;
    cin >> n;
    unsigned int bn;
    bn = conversion(n);
    cout << bn;
    return 0;
}
