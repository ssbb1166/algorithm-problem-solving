#include <iostream>
using namespace std;


int n, cnt;


int main()
{
    cin >> n;

    while (n > 1) {
        n >>= 1;
        cnt++;
    }

    cout << cnt + 10;

    return 0;
}
