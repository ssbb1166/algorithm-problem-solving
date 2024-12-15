#include <iostream>
using namespace std;


int n, sum1, sum2;


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        sum1 += i;

    for (int i = 1; i <= n; i++)
        sum2 += i * i * i;

    cout << sum1 << '\n' << sum1 * sum1 << '\n' << sum2;

    return 0;
}
