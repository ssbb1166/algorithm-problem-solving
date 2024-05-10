#include <algorithm>
#include <iostream>
using namespace std;


int n, cnt[2];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num % 2 == 0) {
            cnt[0]++;
            num /= 2;
        }
        while (num % 5 == 0) {
            cnt[1]++;
            num /= 5;
        }
    }

    cout << min(cnt[0], cnt[1]) << '\n';

    return 0;
}
