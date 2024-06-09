#include <iostream>
using namespace std;


int a, b, c, res, cnt[10];


int main()
{
    cin >> a >> b >> c;

    res = a * b * c;

    while (res) {
        cnt[res % 10]++;
        res /= 10;
    }

    for (int i = 0; i <= 9; i++)
        cout << cnt[i] << '\n';

    return 0;
}
