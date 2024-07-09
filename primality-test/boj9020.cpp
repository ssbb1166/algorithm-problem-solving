#include <iostream>
#include <vector>
using namespace std;


int t, n, p1, p2;
bool prime[10001];
vector<int> primes;


int main()
{
    cin >> t;

    for (int i = 1; i <= 10000; i++)
        prime[i] = true;

    for (int i = 2; i <= 100; i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j <= 10000; j += i)
            prime[j] = false;
    }

    for (int i = 2; i <= 10000; i++)
        if (prime[i]) primes.push_back(i);

    while (t--) {
        cin >> n;

        int s = 0, e = primes.size() - 1;
        while (s <= e) {
            if (primes[s] + primes[e] < n) {
                s++;
            }
            else if (primes[s] + primes[e] > n) {
                e--;
            }
            else {
                p1 = primes[s];
                p2 = primes[e];
                s++;
            }
        }

        cout << p1 << ' ' << p2 << '\n';
    }

    return 0;
}
