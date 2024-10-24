#include <iostream>
using namespace std;


int n, d, num, cnt[10];


int main()
{
    cin >> n >> d;

    for (int i = 1; i <= n; i++) {
        num = i;
        while (num) {
            cnt[num % 10]++;
            num /= 10;
        }
    }

    cout << cnt[d];

    return 0;
}
