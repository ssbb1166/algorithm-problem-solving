#include <iostream>
#include <map>
#include <string>
using namespace std;


int n, m;
string num, name, word;
map<string, string> dict;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> name;
        num = to_string(i);
        dict[name] = num;
        dict[num] = name;
    }

    for (int i = 0; i < m; i++) {
        cin >> word;
        cout << dict[word] << '\n';
    }

    return 0;
}
