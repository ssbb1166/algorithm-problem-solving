#include <iostream>
using namespace std;


int n, k, pos, s[100];
char alpha[100], wheel[25];
bool checked[26], impossible;


void PrintWheel()
{
    for (int i = 0; i < n; i++)
        cout << (wheel[i] ? wheel[i] : '?');
}


int main()
{
    cin >> n >> k;

    for (int i = 0; i < k; i++)
        cin >> s[i] >> alpha[i];

    for (int i = k - 1; i >= 0; i--) {
        if (wheel[pos] && wheel[pos] != alpha[i]) impossible = true;
        if (!wheel[pos] && checked[alpha[i] - 'A']) impossible = true;

        wheel[pos] = alpha[i];
        pos = (pos + s[i]) % n;
        checked[alpha[i] - 'A'] = true;
    }

    if (!impossible)
        PrintWheel();
    else
        cout << "!" << '\n';

    return 0;
}
