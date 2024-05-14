#include <iostream>
#include <string>
#include <vector>
using namespace std;


int n, m, x, max_x, cnt;
bool strick[200];
char activity;
string name;
vector<pair<int, string>> cnts;


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        x = 0, max_x = 0;
        for (int j = 0; j < m; j++) {
            cin >> activity;
            if (activity == '.') {
                x++;
                if (x > max_x)
                    max_x = x;
            }
            else {
                x = 0;
            }
        }
        if (x > max_x)
            max_x = x;

        strick[max_x] = true;

        cin >> name;
        cnts.push_back({ max_x, name });
    }

    for (int i = 0; i <= m; i++)
        cnt += strick[i];

    cout << cnt << '\n';

    for (int i = 0; i < cnts.size(); i++)
        cout << cnts[i].first << ' ' << cnts[i].second << '\n';

    return 0;
}
