#include <cmath>
#include <iostream>
using namespace std;


int n, cnt;
bool prime[246913];


int main()
{
    for (int i = 2; i <= 246912; i++)
        prime[i] = true;

    for (int i = 2; i <= int(sqrt(246913)); i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j <= 246913; j += i)
            prime[j] = false;
    }

    while (1) {
        cin >> n;

        if (n == 0) break;

        cnt = 0;
        for (int i = n + 1; i <= n * 2; i++)
            if (prime[i]) cnt++;

        cout << cnt << '\n';
    }

    return 0;
}
