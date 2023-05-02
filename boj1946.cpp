#include <algorithm>
#include <iostream>
using namespace std;


int t, n, cnt, max_r;
pair<int, int> ranking[100000];


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        for (int j = 0; j < n; j++)
            cin >> ranking[j].first >> ranking[j].second;

        sort(ranking, ranking + n);

        cnt = 0;
        max_r = ranking[0].second;
        for (int j = 0; j < n; j++) {
            if (ranking[j].second <= max_r) {
                max_r = ranking[j].second;
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
