#include <algorithm>
#include <iostream>
using namespace std;


int n;
long long s[200000], a[200000], total;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> s[i] >> a[i];

    sort(s, s + n);
    sort(a, a + n);

    for (int i = 1; i < n; i++)
        total += (long long)i * (n - i) * (s[i] - s[i - 1]);

    for (int i = 1; i < n; i++)
        total += (long long)i * (n - i) * (a[i] - a[i - 1]);

    cout << total;

    return 0;
}
