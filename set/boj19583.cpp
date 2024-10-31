#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;


string s, e, q, t, nickname;
unordered_set<string> in, out;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> s >> e >> q;

    while (cin >> t >> nickname) {
        if (t <= s)
            in.insert(nickname);
        if (t >= e && t <= q && in.find(nickname) != in.end())
            out.insert(nickname);
    }

    cout << out.size();

    return 0;
}
