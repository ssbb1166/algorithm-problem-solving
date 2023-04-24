#include <iostream>
using namespace std;


int n, m, op, a, b, parent[1000001];


int Find(int x)
{
    if (x == parent[x]) return x;
    return parent[x] = Find(parent[x]);
}


void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if (a < b) parent[b] = a;
    else parent[a] = b;
}


int main()
{
    // cin 쓰면 속도가 느려서 추가한 코드
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i <= n; i++)
        parent[i] = i;

    for (int i = 0; i < m; i++) {
        cin >> op >> a >> b;
        if (op == 0)
            Union(a, b);
        if (op == 1)
            cout << (Find(a) == Find(b) ? "YES" : "NO") << '\n';
    }

    return 0;
}
