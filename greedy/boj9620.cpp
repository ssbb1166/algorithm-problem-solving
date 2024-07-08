#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, s, f;
vector<pair<int, int>> events;


int main()
{
    cin >> n;

    while (n--) {
        events.clear();

        while (cin >> s >> f) {
            if (s == 0 && f == 0) break;
            events.push_back({ f, s });
        }

        sort(events.begin(), events.end());

        int cnt = 0;
        pair<int, int> prev = { 0, 0 };
        for (pair<int, int> e : events) {
            if (e.second >= prev.first) {
                cnt++;
                prev = e;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
