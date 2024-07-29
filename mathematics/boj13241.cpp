#include <iostream>
using namespace std;


long long a, b;


long long GCD(long long a, long long b)
{
    long long c = 0;
    while (b > 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

long long LCM(long long a, long long b)
{
    return a * b / GCD(a, b);
}


int main()
{
    cin >> a >> b;
    cout << LCM(a, b);

    return 0;
}
