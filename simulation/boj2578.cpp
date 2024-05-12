#include <iostream>
using namespace std;


int num, cnt, res, pos[26][2];
int cnt_horizontal[5], cnt_vertical[5], cnt_diagonal[2];


int main()
{
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            cin >> num;
            pos[num][0] = x;
            pos[num][1] = y;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> num;

            if (cnt >= 3)
                continue;

            int x = pos[num][0];
            int y = pos[num][1];

            cnt_horizontal[x]++;
            cnt_vertical[y]++;

            if (x == y)
                cnt_diagonal[0]++;
            if (x + y == 4)
                cnt_diagonal[1]++;

            cnt = 0;
            for (int pos = 0; pos < 5; pos++) {
                if (cnt_horizontal[pos] == 5)
                    cnt++;
                if (cnt_vertical[pos] == 5)
                    cnt++;
            }
            if (cnt_diagonal[0] == 5)
                cnt++;
            if (cnt_diagonal[1] == 5)
                cnt++;

            if (cnt >= 3)
                res = i * 5 + j + 1;
        }
    }

    cout << res << '\n';

    return 0;
}
