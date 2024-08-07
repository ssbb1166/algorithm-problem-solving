#include <iostream>
#include <vector>
using namespace std;


int t, n, cnt;
bool prime[1000001];
vector<int> primes;


int main()
{
    cin >> t;

    for (int i = 2; i <= 1000000; i++)
        prime[i] = true;

    for (int i = 2; i <= 1000; i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j <= 1000000; j += i)
            prime[j] = false;
    }

    for (int i = 2; i <= 1000000; i++)
        if (prime[i]) primes.push_back(i);

    while (t--) {
        cin >> n;
        
        cnt = 0;
        for (int num : primes) {
            if (num > n / 2) break;
            if (prime[n - num]) cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
