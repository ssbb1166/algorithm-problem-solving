#include <algorithm>
#include <iostream>
#include <map>
using namespace std;


int n, cnt;
pair<int, int> x[1000000];
map<int, int> res;


int compare(const pair<int, int> &p1, const pair<int, int> &p2)
{
    return p1.second < p2.second;
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i].first;
        x[i].second = i;
    }

    sort(x, x + n);

    for (int i = 0; i < n; i++) {
        if (res.find(x[i].first) == res.end()) {
            res[x[i].first] = cnt;
            cnt++;
        }
    }

    sort(x, x + n, compare);

    for (int i = 0; i < n; i++)
        cout << res[x[i].first] << ' ';

    return 0;
}
