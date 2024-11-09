#include <algorithm>
#include <iostream>
using namespace std;


int tc, n, k, t, m, i, j, s, ranking, score[101][101];
pair<pair<int, int>, pair<int, int>> total[101];


bool Compare(pair<pair<int, int>, pair<int, int>>& a, pair<pair<int, int>, pair<int, int>>& b)
{
    int a_score = a.first.second;
    int b_score = b.first.second;
    int a_cnt = a.second.first;
    int b_cnt = b.second.first;
    int a_submit = a.second.second;
    int b_submit = b.second.second;

    if (a_score == b_score && a_cnt == b_cnt && a_submit > b_submit)
        return false;
    if (a_score == b_score && a_cnt > b_cnt)
        return false;
    if (a_score < b_score)
        return false;
    return true;
}


int main()
{
    cin >> tc;

    while (tc--) {
        cin >> n >> k >> t >> m;

        for (int i = 1; i <= n; i++) {
            fill(score[i] + 1, score[i] + k + 1, 0);
            total[i] = { {i, 0}, {0, 0} };
        }

        for (int idx = 1; idx <= m; idx++) {
            cin >> i >> j >> s;
            score[i][j] = max(s, score[i][j]);
            total[i].second.first++;
            total[i].second.second = idx;
        }

        for (int i = 1; i <= n; i++)
            for (int num = 1; num <= k; num++)
                total[i].first.second += score[i][num];

        sort(total + 1, total + n + 1, Compare);

        for (ranking = 1; ranking <= n; ranking++)
            if (total[ranking].first.first == t) break;

        cout << ranking << '\n';
    }

    return 0;
}
