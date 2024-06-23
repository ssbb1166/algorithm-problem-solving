#include <iostream>
using namespace std;


int t, n;


long long Factorial(int n)
{
    long long res = 1;

    for (int i = 1; i <= n; i++)
        res = res * i % 1000000007;

    return res;
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;
        cout << Factorial(n) - 1 << '\n';
    }

    return 0;
}
