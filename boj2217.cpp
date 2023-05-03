#include <algorithm>
#include <iostream>
using namespace std;


int n, max_w, w[100000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> w[i];

    sort(w, w + n);

    for (int i = 0; i < n; i++)
        max_w = max(max_w, w[i] * (n - i));

    cout << max_w << '\n';

    return 0;
}
