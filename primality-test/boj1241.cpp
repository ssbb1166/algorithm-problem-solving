#include <algorithm>
#include <iostream>
using namespace std;


int n, num[100000], cnt[1000001];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num[i];
        cnt[num[i]]++;
    }

    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 1; j * j <= num[i]; j++) {
            if (num[i] % j == 0) {
                total += cnt[j] + cnt[num[i] / j];
                if (j * j == num[i]) total -= cnt[j];
            }
        }
        cout << total - 1 << '\n';
    }

    return 0;
}
