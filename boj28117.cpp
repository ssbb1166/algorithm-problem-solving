#include <iostream>
#include <string>
using namespace std;


int n, res = 1, cnt, cnt_long[21], cnt_init[21];
string s;


int Combination(int a, int b)
{
    if (a == b || b == 0)
        return 1;

    return Combination(a - 1, b - 1) + Combination(a - 1, b);
}


int main()
{
    cin >> n >> s;

    int len = s.length();

    for (int i = 0; i < n - 3; i++) {
        if (s.substr(i, 4) == "long") {
            cnt++;
            i += 3;
        }
        else {
            cnt_long[cnt]++;
            cnt = 0;
        }
    }

    if (cnt) cnt_long[cnt]++;

    for (int i = 2; i <= 20; i++)
        for (int j = 0; j <= i / 2; j++)
            cnt_init[i] += Combination(i - j, j);

    for (int i = 2; i <= 20; i++)
        for (int j = 0; j < cnt_long[i]; j++)
            res *= cnt_init[i];

    cout << res << '\n';

    return 0;
}
