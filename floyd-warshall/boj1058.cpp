#include <algorithm>
#include <iostream>
#define INF 1e9
using namespace std;


int n, max_cnt, graph[51][51];


int main()
{
    cin >> n;

    for (int a = 1; a <= n; a++)
        for (int b = 1; b <= n; b++)
            graph[a][b] = INF;

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++)
            if (line[j] == 'Y')
                graph[i + 1][j + 1] = 1;
    }

    for (int k = 1; k <= n; k++)
        for (int a = 1; a <= n; a++)
            for (int b = 1; b <= n; b++)
                graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);

    for (int a = 1; a <= n; a++) {
        int cnt = 0;
        for (int b = 1; b <= n; b++)
            if (a != b && graph[a][b] <= 2)
                cnt++;

        if (cnt > max_cnt)
            max_cnt = cnt;
    }

    cout << max_cnt << '\n';

    return 0;
}
