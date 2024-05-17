#include <iostream>
using namespace std;


int n, a, b, c;


int main()
{
    cin >> n >> a >> b >> c;

    if (a > n) a = n;
    if (b > n) b = n;
    if (c > n) c = n;

    cout << a + b + c << '\n';

    return 0;
}
