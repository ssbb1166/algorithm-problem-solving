#include <algorithm>
#include <iostream>
using namespace std;


int n, pos[200000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> pos[i];

    sort(pos, pos + n);

    cout << pos[(n - 1) / 2];

    return 0;
}
