#include <iostream>
using namespace std;


int n, block, cnt;


int main()
{
    while (true) {
        cin >> n;

        if (n == 0) break;

        cnt = 0;
        for (int block = 1; block <= n; block++)
            cnt += block;

        cout << cnt << '\n';
    }

    return 0;
}
