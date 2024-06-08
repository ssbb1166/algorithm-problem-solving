#include <algorithm>
#include <iostream>
using namespace std;


int num, sum, res = 100;


int main()
{
    for (int i = 0; i < 7; i++) {
        cin >> num;
        if (num & 1) {
            sum += num;
            res = min(res, num);
        }
    }

    if (sum)
        cout << sum << '\n' << res;
    else
        cout << -1;

    return 0;
}
