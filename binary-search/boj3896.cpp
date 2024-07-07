#include <cmath>
#include <iostream>
#include <vector>
#define MAX 1299709
using namespace std;


int t, k;
bool prime[1299710];
vector<int> primes;


int main()
{
    cin >> t;

    for (int i = 2; i <= MAX; i++)
        prime[i] = true;

    for (int i = 2; i <= int(sqrt(MAX)); i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j <= MAX; j += i)
            prime[j] = false;
    }

    for (int i = 2; i <= MAX; i++)
        if (prime[i]) primes.push_back(i);

    while (t--) {
        cin >> k;

        int low = 0, high = primes.size() - 1, idx;
        while (low <= high) {
            int mid = (low + high) / 2;
            int num = primes[mid];

            if (num >= k) {
                idx = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        cout << (primes[idx] != k ? primes[idx] - primes[idx - 1] : 0) << '\n';
    }

    return 0;
}
