#include <iostream>
using namespace std;


int t, n, a, b, parent[10001];
bool visited[10001];


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 1; i <= n; i++) {
            parent[i] = i;
            visited[i] = false;
        }

        for (int i = 0; i < n - 1; i++) {
            cin >> a >> b;
            parent[b] = a;
        }

        cin >> a >> b;

        visited[a] = true;
        while (a != parent[a]) {
            a = parent[a];
            visited[a] = true;
        }

        while (!visited[b])
            b = parent[b];

        cout << b << '\n';
    }

    return 0;
}
