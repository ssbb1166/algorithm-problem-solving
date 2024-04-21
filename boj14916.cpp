#include <iostream>
using namespace std;


int n, cnt;


int main()
{
    cin >> n;

    cnt = n / 5;
    switch (n % 5) {
    case 1: case 4:
        cnt += 2;
        break;
    case 2:
        cnt += 1;
        break;
    case 3:
        cnt += 3;
        break;
    }

    if (n != 1 && n != 3)
        cout << cnt << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
