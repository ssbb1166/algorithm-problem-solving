#include <iostream>
#include <map>
#include <string>
using namespace std;


int n, m;
bool found;
string q, a, s;
map<string, string> info;


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> q >> a;
        info[q] = a;
    }

    for (int i = 0; i < m; i++) {
        cin >> s;
        found = false;
        for (int start = 0; start < s.length(); start++) {
            for (int len = 1; len <= s.length() - start; len++) {
                if (info.find(s.substr(start, len)) != info.end()) {
                    cout << info[s.substr(start, len)];
                    found = true;
                }
            }
        }
        if (!found) cout << -1;
        cout << '\n';
    }

    return 0;
}
