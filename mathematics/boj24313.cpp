#include <iostream>
using namespace std;


int a1, a0, c, n0;


int main()
{
    cin >> a1 >> a0 >> c >> n0;
    cout << ((a1 <= c && a1 * n0 + a0 <= c * n0) ? 1 : 0);

    return 0;
}
