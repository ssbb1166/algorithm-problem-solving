#include <iostream>
using namespace std;


int n, cnt1, cnt2;


int fib(int n)
{
    if (n == 1 || n == 2) {
        cnt1++;
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}


int fibonacci(int n)
{
    int f[41] = { 0, 1, 1 };
    for (int i = 3; i <= n; i++) {
        cnt2++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}


int main()
{
    cin >> n;

    fib(n);
    fibonacci(n);

    cout << cnt1 << ' ' << cnt2;

    return 0;
}
