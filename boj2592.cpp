#include <iostream>
using namespace std;


int num, sum, max_cnt, cnt[100];


int main()
{
    for (int i = 0; i < 10; i++) {
        cin >> num;
        sum += num;
        cnt[num / 10]++;
    }

    for (int i = 0; i < 100; i++) {
        if (cnt[i] > max_cnt) {
            max_cnt = cnt[i];
            num = i;
        }
    }

    cout << sum / 10 << '\n';
    cout << num * 10 << '\n';

    return 0;
}
