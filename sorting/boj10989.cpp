#include <iostream>
using namespace std;


int n, num, cnt[10001];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        cnt[num]++;
    }

    for (num = 1; num <= 10000; num++)
        for (int i = 0; i < cnt[num]; i++)
            cout << num << '\n';

    return 0;
}
