#include <iostream>
using namespace std;


string a, b;
int cnt, res = 50;


int main()
{
    cin >> a >> b;

    for (int i = 0; i <= b.length() - a.length(); i++) {
        cnt = 0;
        for (int j = 0; j < a.length(); j++)
            if (a[j] != b[i + j]) cnt++;

        if (cnt < res)
            res = cnt;
    }

    cout << res << '\n';

    return 0;
}
