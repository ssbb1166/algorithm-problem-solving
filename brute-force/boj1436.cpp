#include <iostream>
using namespace std;


int n, cnt, num;


int main()
{
    cin >> n;

    while (cnt < n) {
        int tmp = ++num;
        while (tmp > 0) {
            if (tmp % 1000 == 666) {
                cnt++;
                break;
            }
            tmp /= 10;
        }
    }

    cout << num << '\n';

    return 0;
}
