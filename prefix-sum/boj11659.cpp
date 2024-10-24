#include <iostream>
using namespace std;


int n, m, p[100001];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        p[i] += p[i - 1];
    }

    int start, end;
    for (int i = 0; i < m; i++) {
        cin >> start >> end;
        cout << p[end] - p[start - 1] << '\n';
    }

    return 0;
}
