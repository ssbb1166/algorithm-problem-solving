#include <algorithm>
#include <iostream>
#include <vector>
#define INF 1e9
using namespace std;


int t, n, m, team, score, min_total, winner, num[201], cnt[201], fifth[201], total[201];
vector<int> result;


void Initialize()
{
    m = score = 0;
    min_total = INF;
    result.clear();

    for (int team = 1; team <= 200; team++)
        num[team] = cnt[team] = fifth[team] = total[team] = 0;
}


bool WinGame(int team)
{
    if (total[team] > min_total) return false;
    return total[team] < min_total || fifth[team] < fifth[winner];
}


int main()
{
    cin >> t;

    while (t--) {
        Initialize();

        cin >> n;

        for (int rank = 1; rank <= n; rank++) {
            cin >> team;
            m = max(m, team);
            result.push_back(team);
            if (++num[team] == 5) fifth[team] = rank;
        }

        for (int team : result) {
            cnt[team]++;
            if (num[team] == 6) score++;
            if (cnt[team] <= 4) total[team] += score;
        }

        for (int team = 1; team <= m; team++) {
            if (num[team] == 6 && WinGame(team)) {
                min_total = total[team];
                winner = team;
            }
        }

        cout << winner << '\n';
    }

    return 0;
}
