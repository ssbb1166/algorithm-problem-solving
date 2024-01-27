#include <iostream>
using namespace std;


int n, cnt, sum = 1;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cnt;
        sum += cnt - 1;
    }

    cout << sum << '\n';

    return 0;
}
