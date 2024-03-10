#include <algorithm>
#include <iostream>
using namespace std;


int n, s, e, cnt;
pair<int, int> t[100000];


bool cmp(pair<int, int> t1, pair<int, int> t2)
{
    if (t1.second == t2.second)
        return t1.first < t2.first;

    return t1.second < t2.second;
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> e;
        t[i] = make_pair(s, e);
    }

    sort(t, t + n, cmp);

    int prev = 0;
    for (int i = 0; i < n; i++) {
        if (prev <= t[i].first) {
            prev = t[i].second;
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}
