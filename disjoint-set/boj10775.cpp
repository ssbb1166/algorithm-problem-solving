#include <iostream>
using namespace std;


int g, p, max_g, cnt_g, cnt_p, parent[1000001];


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
    cin >> g >> p;

    for (int i = 1; i <= g; i++)
        parent[i] = i;

    for (cnt_p = 0; cnt_p < p; cnt_p++) {
        cin >> max_g;
        cnt_g = Find(max_g);
        if (cnt_g == 0) break;
        Union(cnt_g, cnt_g - 1);
    }

    cout << cnt_p << '\n';

    return 0;
}
