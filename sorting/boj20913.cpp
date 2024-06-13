#include <iostream>
#include <string>
using namespace std;


int n, p[100];
string larry[100];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p[i];
        larry[i] += 1 + '0';
        larry[i] += i / 10 + '0';
        larry[i] += i % 10 + '0';
    }

    for (int i = 0; i < n; i++) {
        cout << larry[i];
        for (int j = 0; j < p[i]; j++)
            cout << 0;
        cout << ' ';
    }

    return 0;
}
