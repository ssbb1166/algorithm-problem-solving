#include <iostream>
#include <map>
#include <string>
using namespace std;


int t, n, res;
string name, type;
map<string, int> cnt;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        cnt.clear();

        for (int j = 0; j < n; j++) {
            cin >> name >> type;
            if (cnt.count(type))
                cnt[type]++;
            else
                cnt[type] = 1;
        }

        res = 1;
        for (auto it = cnt.begin(); it != cnt.end(); it++)
            res *= (it->second + 1);

        cout << res - 1 << '\n';
    }

    return 0;
}
