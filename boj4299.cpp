#include <iostream>
using namespace std;


int sum, sub, a, b;


int main()
{
    cin >> sum >> sub;

    a = (sum + sub) / 2;
    b = (sum - sub) / 2;

    if (sum >= sub && a + b == sum && a - b == sub)
        cout << a << ' ' << b << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
