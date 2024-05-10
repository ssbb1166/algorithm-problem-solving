#include <iostream>
using namespace std;


int n, cnt;


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num % 5 == 0) {
            cnt++;
            num /= 5;
        }
    }

    cout << cnt << '\n';

    return 0;
}
