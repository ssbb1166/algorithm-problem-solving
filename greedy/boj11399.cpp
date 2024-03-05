#include <algorithm>
#include <iostream>
using namespace std;


int n, sum, p[1000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> p[i];

    sort(p, p + n);

    sum = p[0];
    for (int i = 1; i < n; i++)
        sum += p[i] += p[i - 1];

    cout << sum << '\n';

    return 0;
}
