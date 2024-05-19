#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int n, cnt[26], sum = 4;
string s, name;


int main()
{
    cin >> n >> s;

    n += 1906;

    name += to_string(n);

    for (int i = 0; i < s.length(); i++) {
        if (cnt[s[i] - 'A'] == 0)
            name += s[i];
        else
            sum++;
        cnt[s[i] - 'A']++;
    }

    name += to_string(sum);

    reverse(name.begin(), name.end());

    cout << "smupc_" << name << '\n';

    return 0;
}
