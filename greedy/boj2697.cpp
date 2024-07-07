#include <algorithm>
#include <iostream>
using namespace std;


int t, idx = -1, min_idx;
char min_digit;
string a;


int main()
{
    cin >> t;

    while (t--) {
        cin >> a;

        idx = -1;
        for (int digit = 0; digit < a.length() - 1; digit++) {
            if (a[digit] < a[digit + 1]) {
                idx = digit;
                min_digit = '0';
            }
            if (idx != -1 && a[digit + 1] > a[idx]) {
                min_idx = digit + 1;
                min_digit = min(min_digit, a[digit + 1]);
            }
        }

        if (idx != -1) {
            char tmp = a[idx];
            a[idx] = a[min_idx];
            a[min_idx] = tmp;
            sort(a.begin() + idx + 1, a.end());
            cout << a << '\n';
        }
        else {
            cout << "BIGGEST" << '\n';
        }
    }

    return 0;
}
