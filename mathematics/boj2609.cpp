#include <iostream>
using namespace std;


int a, b;


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


int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}


int main()
{
    cin >> a >> b;

    cout << GCD(a, b) << '\n';
    cout << LCM(a, b) << '\n';

    return 0;
}
