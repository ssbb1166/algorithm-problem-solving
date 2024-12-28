#include <iostream>
#define INF 1000000000
using namespace std;


int n, m, a[1000], b[1000];
long long divisor, res = 1;
bool over;


long long GCD(long long a, long long b)
{
    long long c;

    while (b > 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}


int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            divisor = GCD(a[i], b[j]);

            res *= divisor;
            a[i] /= divisor;
            b[j] /= divisor;

            if (res >= INF) {
                res = res % INF;
                over = true;
            }
        }
    }

    if (over) {
        cout.width(9);
        cout.fill('0');
    }

    cout << res;

    return 0;
}
