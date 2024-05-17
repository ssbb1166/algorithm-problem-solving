#include <iostream>
#include <string>
using namespace std;


char op;
string a, b;
int len_a, len_b;


int main()
{
    cin >> a >> op >> b;

    len_a = a.length();
    len_b = b.length();

    if (op == '+') {
        if (len_a > len_b) {
            a[len_a - len_b] = '1';
            cout << a << '\n';
        }
        else if (len_a < len_b) {
            b[len_b - len_a] = '1';
            cout << b << '\n';
        }
        else {
            a[0] = '2';
            cout << a << '\n';
        }
    }

    if (op == '*') {
        cout << 1;
        for (int i = 0; i < len_a + len_b - 2; i++) cout << 0;
        cout << '\n';
    }

    return 0;
}
