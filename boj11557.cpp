#include <iostream>
#include <string>
using namespace std;


int t, n, l, max_l;
string s, max_s;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> s >> l;
            if (l > max_l) {
                max_l = l;
                max_s = s;
            }
        }

        cout << max_s << '\n';
    }

    return 0;
}
