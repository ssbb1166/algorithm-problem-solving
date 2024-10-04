#include <iostream>
using namespace std;


int t, n, cnt;
bool opened[101];


int main()
{
    cin >> t;
    
    while (t--) {
        cin >> n;

        for (int i = 1; i <= n; i++)
            opened[i] = false;

        for (int i = 1; i <= n; i++)
            for (int j = i; j <= n; j += i)
                opened[j] = !opened[j];

        cnt = 0;
        for (int i = 1; i <= n; i++)
            cnt += opened[i];

        cout << cnt << '\n';
    }

    return 0;
}
