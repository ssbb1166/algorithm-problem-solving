#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int p, y[3];
string s;
vector<pair<int, string>> info;


int main()
{
    for (int i = 0; i < 3; i++) {
        cin >> p >> y[i] >> s;
        y[i] = y[i] % 100;
        info.push_back({ p, s });
    }

    sort(y, y + 3);
    sort(info.begin(), info.end(), greater<>());

    cout << y[0] << y[1] << y[2] << '\n';
    cout << info[0].second[0] << info[1].second[0] << info[2].second[0] << '\n';

    return 0;
}
