#include <iostream>
#include <vector>
using namespace std;


int n, m, x, num, first, cnt, parent[51];
bool know_truth[51];
vector<int> party;


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
    cin >> n >> m >> num;

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    // 진실을 아는 사람의 부모를 0으로 설정
    for (int i = 0; i < num; i++) {
        cin >> x;
        parent[x] = 0;
    }

    for (int i = 0; i < m; i++) {
        cin >> num >> first;
        party.push_back(first);
        for (int j = 1; j < num; j++) {
            cin >> x;
            Union(first, x);
        }
    }

    for (int i = 0; i < party.size(); i++)
        if (Find(party[i]))
            cnt++;

    cout << cnt << '\n';

    return 0;
}
