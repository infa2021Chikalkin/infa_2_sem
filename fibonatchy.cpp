#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    cout << "Enter the number" << endl;
    cin >> n;
    long long a = 0;
    long long b = 1;
    long long c;
    for (int i = 0; i < n - 1; ++i){
        c = a + b;
        a = b;
        b = c;
    }
    cout << a;

}

