#include <iostream>
using namespace std;


int x, cnt;


int main()
{
    cin >> x;

    while (x > 0) {
        if (x & 1) cnt++;
        x >>= 1;
    }

    cout << cnt;

    return 0;
}
