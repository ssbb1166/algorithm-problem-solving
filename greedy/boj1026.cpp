#include <algorithm>
#include <iostream>
using namespace std;


int n, s, a[50], b[50];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + n, greater<>());

    for (int i = 0; i < n; i++)
        s += a[i] * b[i];

    cout << s << '\n';

    return 0;
}
