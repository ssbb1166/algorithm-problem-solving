#include <iostream>
using namespace std;


int k, s[13], res[6];


void SelectNumber(int cnt, int num)
{
    if (cnt == 6) {
        for (int i = 0; i < 6; i++)
            cout << res[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = num; i < k; i++) {
        res[cnt] = s[i];
        SelectNumber(cnt + 1, i + 1);
    }
}


int main()
{
    while (1) {
        cin >> k;

        if (k == 0) break;

        for (int i = 0; i < k; i++)
            cin >> s[i];

        SelectNumber(0, 0);

        cout << '\n';
    }

    return 0;
}
