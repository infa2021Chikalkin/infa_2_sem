#include <iostream>

using namespace  std;

void call_count() {
    static unsigned int count = 0;
    ++count;
    cout<<count<<endl;
}
auto entering()
{
    int a;
    cin>>a;
    return a;
}

auto sum_of_int(int a, int b)
{
    return a + b;
}
void print(auto number)
{
   cout<<number<<endl;
}

int main()
{
    int a;
    int b;
    int c;
    a = entering();
    b = entering();
    c = sum_of_int(a, b);
    print(c);
    for (int i = 0; i < 5; ++i){
    call_count();}
    return 0;
}
