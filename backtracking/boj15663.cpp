#include <algorithm>
#include <iostream>
using namespace std;


int n, m, num[8], seq[8];
bool visited[8];


void FindSequence(int cnt)
{
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            cout << seq[i] << ' ';
        cout << '\n';
        return;
    }

    int last = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && num[i] != last) {
            last = seq[cnt] = num[i];
            visited[i] = true;
            FindSequence(cnt + 1);
            visited[i] = false;
        }
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> num[i];

    sort(num, num + n);

    FindSequence(0);

    return 0;
}
