#include <cmath>
#include <iostream>
using namespace std;


int t;
long long n;


bool IsPrime(long long x)
{
    if (x == 0 || x == 1) return false;

    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0) return false;

    return true;
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;
        while (!IsPrime(n)) n++;
        cout << n << '\n';
    }

    return 0;
}
