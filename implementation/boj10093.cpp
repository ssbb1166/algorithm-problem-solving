#include <algorithm>
#include <iostream>
using namespace std;


long long a, b, tmp;


int main()
{
    cin >> a >> b;

    if (a > b)
        swap(a, b);

    if (a == b)
        cout << 0 << '\n';
    else
        cout << b - a - 1 << '\n';

    for (long long i = a + 1; i < b; i++)
        cout << i << ' ';

    return 0;
}
