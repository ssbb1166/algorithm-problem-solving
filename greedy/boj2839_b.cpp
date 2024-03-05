#include <iostream>
using namespace std;


int n, cnt;


int main()
{
    cin >> n;

    cnt = n / 5;
    switch (n % 5) {
    case 1: case 3: cnt += 1; break;
    case 2: case 4: cnt += 2; break;
    }

    if (n != 4 && n != 7)
        cout << cnt << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
