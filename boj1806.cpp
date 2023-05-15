#include <algorithm>
#include <iostream>
#define INF 100000
using namespace std;


int n, s, len = INF, p[100001];


int main()
{
    cin >> n >> s;

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        p[i] += p[i - 1];
    }

    int end = 1;
    for (int start = 1; start <= n; start++) {
        while (p[end] - p[start - 1] < s && end <= n) end++;
        if (p[end] - p[start - 1] >= s)
            len = min(len, end - start + 1);
    }

    if (len == INF)
        cout << 0 << '\n';
    else
        cout << len << '\n';

    return 0;
}
