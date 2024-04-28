#include <iostream>
#include <vector>
using namespace std;


int n, m, connect, city, parent[201];
vector<int> plan;


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


string GetResult()
{
    int root = Find(plan[0]);

    for (int i = 1; i < plan.size(); i++)
        if (Find(plan[i]) != root)
            return "NO";

    return "YES";
}


int main()
{
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        parent[i] = i;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> connect;
            if (connect) Union(i, j);
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> city;
        plan.push_back(city);
    }

    cout << GetResult() << '\n';

    return 0;
}
