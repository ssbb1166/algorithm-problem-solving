#include <iostream>
using namespace std;


int n, num, pos, cnt, stamp[11];


int main()
{
    cin >> n;

    for (num = 1; num <= 10; num++)
        stamp[num] = -1;

    while (n--) {
        cin >> num >> pos;
        if (stamp[num] != -1 && stamp[num] != pos) cnt++;
        stamp[num] = pos;
    }

    cout << cnt;

    return 0;
}
