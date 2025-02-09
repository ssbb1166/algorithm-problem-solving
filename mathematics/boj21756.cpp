#include <iostream>
using namespace std;


int n, res = 1;


int main()
{
    cin >> n;

    while (res << 1 <= n)
        res <<= 1;

    cout << res;

    return 0;
}
