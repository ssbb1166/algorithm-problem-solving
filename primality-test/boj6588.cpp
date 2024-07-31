#include <iostream>
#include <vector>
using namespace std;


int n;
bool prime[1000001];
vector<int> primes;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i <= 1000000; i++)
        prime[i] = true;

    for (int i = 2; i <= 1000; i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j <= 1000000; j += i)
            prime[j] = false;
    }

    for (int i = 2; i <= 1000000; i++)
        if (prime[i]) primes.push_back(i);

    while (cin >> n) {
        if (n == 0) break;
        for (int a : primes) {
            int b = n - a;
            if (prime[n - a]) {
                cout << n << " = " << a << " + " << b << '\n';
                break;
            }
        }
    }

    return 0;
}
