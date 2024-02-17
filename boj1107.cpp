#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int n, m, num, cnt, res;
bool button[10];


bool IsPossible(int channel)
{
    string num = to_string(channel);

    for (int i = 0; i < num.length(); i++)
        if (button[num[i] - '0'])
            return false;

    return true;
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> num;
        button[num] = true;
    }

    res = abs(n - 100);

    for (int channel = 0; channel <= 1000000; channel++) {
        if (IsPossible(channel)) {
            cnt = abs(n - channel) + to_string(channel).length();
            res = min(cnt, res);
        }
    }

    cout << res << '\n';

    return 0;
}
