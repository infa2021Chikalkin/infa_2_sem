#include <iostream>
using namespace std;

int set_code(char symbol)
{
    if (symbol == '(') return 1;
    if (symbol == '[') return 2;
    if (symbol == '{') return 3;
    if (symbol == ')') return -1;
    if (symbol == ']') return -2;
    if (symbol == '}') return -3;
    return 0;
}

bool check_current_bracket(int x)
{
    char a;
    int y = 0;
    while (y >= 0) {
        cin >> a;
        if (a == '@') return false;
        y = set_code(a);
        if ((y > 0) && (!check_current_bracket(y))) return false;
    }
    return (x + y == 0);
}

int main()
{
    char a;
    bool error = false;
    cout << "Enter the text. If you are finished, enter @" << endl;
    while (cin >> a){
        if (a == '@') break;
        if (set_code(a) < 0) {error = true; break;}
        if ((set_code(a) > 0) && !check_current_bracket(set_code(a))) {error = true; break;}
    }
    if (error) cout << "Error!";
    else cout << "All right!";
    return 0;
}