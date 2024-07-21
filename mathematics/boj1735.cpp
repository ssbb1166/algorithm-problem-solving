#include <iostream>
using namespace std;


int a1, b1, a2, b2, a, b;


int GCD(int a, int b)
{
    int c = 0;
    while (b > 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}


int main()
{
    cin >> a1 >> b1;
    cin >> a2 >> b2;

    a = a1 * b2 + a2 * b1;
    b = b2 * b1;

    cout << a / GCD(a, b) << ' ' << b / GCD(a, b);

    return 0;
}
