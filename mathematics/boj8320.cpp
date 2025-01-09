#include <iostream>
using namespace std;


int n, cnt;


int main()
{
    cin >> n;

    for (int x = 1; x <= n; x++)
        for (int y = x; x * y <= n; y++)
            cnt++;

    cout << cnt;

    return 0;
}
