#include <iostream>
using namespace std;


int n, k, s, a, b;
bool graph[401][401];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        graph[a][b] = true;
    }

    for (int k = 1; k <= n; k++)
        for (int a = 1; a <= n; a++)
            for (int b = 1; b <= n; b++)
                if (graph[a][k] && graph[k][b])
                    graph[a][b] = true;

    cin >> s;

    for (int i = 0; i < s; i++) {
        cin >> a >> b;

        if (graph[a][b])
            cout << -1 << '\n';
        else if (graph[b][a])
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}
