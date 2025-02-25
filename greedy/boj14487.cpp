#include <algorithm>
#include <iostream>
using namespace std;


int n, sum, v[50000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v, v + n);

    cout << sum - v[n - 1];

    return 0;
}
