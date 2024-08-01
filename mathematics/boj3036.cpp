#include <iostream>
using namespace std;


int n, r[100];


int GCD(int a, int b)
{
    while (b > 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> r[i];

    for (int i = 1; i < n; i++) {
        int divisor = GCD(r[0], r[i]);
        cout << r[0] / divisor << "/" << r[i] / divisor << '\n';
    }

    return 0;
}
