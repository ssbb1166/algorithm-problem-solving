#include <iostream>
using namespace std;


int s1, s2, s3, cnt[81], max_cnt, res;


int main()
{
    cin >> s1 >> s2 >> s3;

    for (int i = 1; i <= s1; i++)
        for (int j = 1; j <= s2; j++)
            for (int k = 1; k <= s3; k++)
                cnt[i + j + k]++;

    for (int i = 1; i <= 80; i++) {
        if (cnt[i] > max_cnt) {
            max_cnt = cnt[i];
            res = i;
        }
    }

    cout << res << '\n';

    return 0;
}
