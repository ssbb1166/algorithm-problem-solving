#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int n, state;
string mirror[100];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> mirror[i];

    cin >> state;

    switch (state) {
    case 1:
        for (int i = 0; i < n; i++)
            cout << mirror[i] << '\n';
        break;
    case 2:
        for (int i = 0; i < n; i++) {
            reverse(mirror[i].begin(), mirror[i].end());
            cout << mirror[i] << '\n';
        }
        break;
    case 3:
        for (int i = n - 1; i >= 0; i--)
            cout << mirror[i] << '\n';
        break;
    }

    return 0;
}
