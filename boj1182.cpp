#include <iostream>
using namespace std;


int n, s, cnt, arr[20];


void Count(int idx, int sum)
{
    if (idx == n) {
        if (sum == s) cnt++;
        return;
    }

    Count(idx + 1, sum);             // 현재 원소 미포함
    Count(idx + 1, sum + arr[idx]);  // 현재 원소 포함
}


int main()
{
    cin >> n >> s;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Count(0, 0);

    if (s) cout << cnt << '\n';
    else cout << cnt - 1 << '\n';

    return 0;
}
