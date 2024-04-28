#include <algorithm>
#include <iostream>
using namespace std;


int n, res, w[100000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> w[i];

    sort(w, w + n);

    for (int i = 0; i < n; i++)
        res = max(res, w[i] * (n - i));

    cout << res << '\n';

    return 0;
}
