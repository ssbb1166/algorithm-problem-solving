#include <iostream>
using namespace std;


int n, sum, res, a[8], seq[8];
bool visited[8];


void FindSequence(int cnt)
{
    if (cnt == n) {
        sum = 0;
        for (int i = 0; i < n - 1; i++)
            sum += abs(seq[i] - seq[i + 1]);
        if (sum > res)
            res = sum;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            seq[cnt] = a[i];
            visited[i] = true;
            FindSequence(cnt + 1);
            visited[i] = false;
        }
    }
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    FindSequence(0);

    cout << res << '\n';

    return 0;
}
