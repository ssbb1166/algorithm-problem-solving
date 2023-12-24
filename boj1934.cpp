#include <iostream>
using namespace std;


int t, a, b;


int GCD(int a, int b)
{
    int c = a % b;

    while (c) {
        a = b;
        b = c;
        c = a % b;
    }

    return b;
}


int LCD(int a, int b)
{
    return a * b / GCD(a, b);
}


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << LCD(a, b) << '\n';
    }

    return 0;
}
