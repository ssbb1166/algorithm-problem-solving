#include <iostream>
using namespace std;


int n, m, cnt[2];


void CountDivisor(int num, bool minus)
{
    for (long long i = 2; i <= num; i *= 2)
        cnt[0] += minus ? -num / i : num / i;

    for (long long i = 5; i <= num; i *= 5)
        cnt[1] += minus ? -num / i : num / i;
}


int main()
{
    cin >> n >> m;

    CountDivisor(n, 0);
    CountDivisor(m, 1);
    CountDivisor(n - m, 1);

    cout << (cnt[0] < cnt[1] ? cnt[0] : cnt[1]);

    return 0;
}
