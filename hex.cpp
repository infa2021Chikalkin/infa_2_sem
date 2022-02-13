#include <iostream>
using namespace std;

const char arr[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

unsigned long long conversion(char a)
{
    if (isdigit(a)) return a - '0';
    for (int i = 0; i<6; ++i){
        if (a == arr[i]) return 10 + i;
    }
    return 16;
}
int main()
{
    unsigned long long n = 0;
    char a;
    bool error = false;
    cout << "Enter the number. If you are finished, enter '@'" << endl;
    while (cin >> a){
       if (a == '@') break;
       if (conversion(a) == 16) {error = true; break;};
       n = n * 16 + conversion(a);
    };
    if (!error) cout << n;
    else cout << "Error";
    return 0;
}

