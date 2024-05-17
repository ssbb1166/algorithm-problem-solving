#include <iostream>
using namespace std;


int n, m, card[100], sum, res;


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> card[i];

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = card[i] + card[j] + card[k];
                if (sum > res && sum <= m) res = sum;
            }
        }
    }

    cout << res << '\n';

    return 0;
}
