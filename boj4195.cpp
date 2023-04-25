#include <iostream>
#include <map>
#include <string>
using namespace std;


int t, f;
string a, b;
map<string, int> cnt;
map<string, string> parent;


string Find(string x)
{
    if (x == parent[x]) return x;
    return parent[x] = Find(parent[x]);
}


void Union(string a, string b)
{
    a = Find(a);
    b = Find(b);
    if (a != b) {
        parent[b] = a;
        cnt[a] += cnt[b];
    }
}


int main()
{
    // cin 쓰면 속도가 느려서 추가한 코드
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++) {
        cnt.clear();
        parent.clear();

        cin >> f;

        for (int j = 0; j < f; j++) {
            cin >> a >> b;

            if (!parent.count(a)) {
                parent[a] = a;
                cnt[a] = 1;
            }

            if (!parent.count(b)) {
                parent[b] = b;
                cnt[b] = 1;
            }

            Union(a, b);

            cout << cnt[Find(a)] << '\n';
        }
    }

    return 0;
}
