#include <iostream>
using namespace std;


int n, m, num, cnt[10000000];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    while (n--) {
        cin >> num;
        cnt[num]++;
        if (cnt[num] > 1) m = num;
    }

    cout << m;

    return 0;
}
