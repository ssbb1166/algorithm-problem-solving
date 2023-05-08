#include <cmath>
#include <iostream>
using namespace std;


int m, n;
bool prime[1000001];


int main()
{
    cin >> m >> n;

    for (int i = 2; i <= 1000000; i++)
        prime[i] = true;

    for (int i = 2; i <= int(sqrt(n)); i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j <= n; j += i)
            prime[j] = false;
    }

    for (int i = m; i <= n; i++)
        if (prime[i]) cout << i << '\n';

    return 0;
}
