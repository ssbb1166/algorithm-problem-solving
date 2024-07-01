#include <iostream>
using namespace std;


int p;
long long n[4];


int IsPretty(long long &n, int &p)
{
    int cnt[3] = { 0, 0, 0 };
    while (n > 0) {
        if (n % p > 2) return 0;
        cnt[n % p]++;
        n /= p;
    }

    if (cnt[1] == 1 && cnt[2] != 0 || cnt[1] == 2 && cnt[2] == 0)
        return 1;

    return 0;
}


int main()
{
    cin >> p >> n[0] >> n[1] >> n[2] >> n[3];

    for (int i = 0; i < 4; i++)
        cout << IsPretty(n[i], p) << ' ';

    return 0;
}
