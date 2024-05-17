#include <iostream>
using namespace std;


int t, s, n, q, p;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s >> n;

        for (int j = 0; j < n; j++) {
            cin >> q >> p;
            s += q * p;
        }

        cout << s << '\n';
    }
    return 0;
}
