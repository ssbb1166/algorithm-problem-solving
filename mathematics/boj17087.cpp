#include <cstdlib>
#include <iostream>
using namespace std;


int n, s, a, d;


int GCD(int a, int b)
{
    int c;
    while (b > 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}


int main()
{
    cin >> n >> s >> a;

    d = abs(s - a);

    for (int i = 1; i < n; i++) {
        cin >> a;
        d = GCD(abs(s - a), d);
    }

    cout << d;

    return 0;
}
