#include <algorithm>
#include <iostream>
using namespace std;


int l, n, low, high, s[51];
bool possible;


int main()
{
    cin >> l;

    for (int i = 1; i <= l; i++)
        cin >> s[i];

    cin >> n;

    sort(s, s + l + 1);

    for (int i = 1; i <= l; i++) {
        if (s[i] == n) break;
        if (s[i] > n) {
            possible = true;
            low = s[i - 1];
            high = s[i];
            break;
        }
    }

    cout << (possible ? (n - low) * (high - n) - 1 : 0);

    return 0;
}
