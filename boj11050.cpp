#include <iostream>
using namespace std;


int n, k, tmp;


int main()
{
    cin >> n >> k;

    tmp = n - 1;
    for (int i = 1; i < k; i++) {
        n *= tmp;
        tmp--;
    }

    tmp = k;
    for (int i = 0; i < k; i++) {
        n /= tmp;
        tmp--;
    }

    if (k == 0)
        cout << 1 << '\n';
    else
        cout << n << '\n';

    return 0;
}
