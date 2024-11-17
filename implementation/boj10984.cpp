#include <iostream>
using namespace std;


int t, n, c;
double g, csum, gsum;


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;

        csum = gsum = 0;
        while (n--) {
            cin >> c >> g;
            csum += c;
            gsum += c * g;
        }

        cout << csum << ' ' << gsum / csum << '\n';
    }

    return 0;
}
