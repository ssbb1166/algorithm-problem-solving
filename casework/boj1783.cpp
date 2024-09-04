#include <algorithm>
#include <iostream>
using namespace std;


int n, m;


int main()
{
    cin >> n >> m;

    if (n == 1)
        cout << 1;
    else if (n == 2)
        cout << min((m + 1) / 2, 4);
    else if (m <= 6)
        cout << min(m, 4);
    else
        cout << m - 2;

    return 0;
}
