#include <iostream>
#include <cassert>
using namespace std;

bool checking_simplicity(unsigned int n, unsigned int m)
{
    if ((n % m == 0) && (n > m)) return false;
    else if (m < n - 1) return checking_simplicity(n, m + 1);
    else return true;
}

void checking_prime(unsigned int n)
{
    if (n == 1) cout<<"This is 1"<<endl;
    else if (n == 2) cout<<"This is simple number"<<endl;
    else if (checking_simplicity(n,2)) cout<<"This is simple number"<<endl;
    else cout<<"This is not simple number"<<endl;
}

int main()
{
    assert(checking_simplicity(76, 2)==false);
    unsigned int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    checking_prime(n);
return 0;
}
