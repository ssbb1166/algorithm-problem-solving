#include <iostream>
using namespace std;


long long a, b, digits;


long long GCD(long long a, long long b)
{
    while (b > 0) {
        long long c = a % b;
        a = b;
        b = c;
    }
    return a;
}


int main()
{
    cin >> a >> b;

    digits = GCD(a, b);

    while (digits--)
        cout << 1;

    return 0;
}
