#include <iostream>
using namespace std;


int n, num, cnt;


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> num;
        if (i != num) cnt++;
    }

    cout << cnt;

    return 0;
}
