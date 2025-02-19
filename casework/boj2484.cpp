#include <algorithm>
#include <iostream>
using namespace std;


int n, die, three_cnt, two_cnt, two_money, money, res, cnt[7];


void Initialize()
{
    three_cnt = two_cnt = two_money = 0;
    for (int die = 1; die <= 6; die++)
        cnt[die] = 0;
}


int main()
{
    cin >> n;

    while (n--) {
        Initialize();

        for (int i = 0; i < 4; i++) {
            cin >> die;
            cnt[die]++;

            if (cnt[die] == 3)
                three_cnt++;

            if (cnt[die] == 2) {
                two_cnt++;
                two_money += die * 500;
            }
        }

        for (int die = 1; die <= 6; die++) {
            if (cnt[die] == 4)
                money = 50000 + die * 5000;
            if (cnt[die] == 3)
                money = 10000 + die * 1000;
            if (cnt[die] == 2 && two_cnt == 2)
                money = 2000 + two_money;
            if (cnt[die] == 2 && two_cnt == 1)
                money = 1000 + die * 100;
            if (cnt[die] == 1 && two_cnt == 0 && three_cnt == 0)
                money = die * 100;
        }

        res = max(money, res);
    }

    cout << res;

    return 0;
}
