#include <iostream>
#include <map>
#include <string>
using namespace std;


int n, m, cnt;
string str;
map<string, bool> s;


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> str;
        s[str] = true;
    }

    for (int i = 0; i < m; i++) {
        cin >> str;
        if (s[str]) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
