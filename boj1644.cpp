#include <cmath>
#include <iostream>
#include <vector>
using namespace std;


int n, sum, cnt;
bool prime[4000001];
vector<int> prime_numbers;


int main()
{
    cin >> n;

    for (int i = 2; i <= n; i++)
        prime[i] = true;

    for (int i = 2; i <= int(sqrt(n)); i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j <= n; j += i)
            prime[j] = false;
    }

    for (int i = 2; i <= n; i++)
        if (prime[i]) prime_numbers.push_back(i);

    int end = 0;
    for (int start = 0; start < prime_numbers.size(); start++) {
        while (sum < n && end < prime_numbers.size()) {
            sum += prime_numbers[end];
            end++;
        }
        if (sum == n) cnt++;
        sum -= prime_numbers[start];
    }

    cout << cnt << '\n';

    return 0;
}
