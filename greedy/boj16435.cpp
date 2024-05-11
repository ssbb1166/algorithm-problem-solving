#include <algorithm>
#include <iostream>
using namespace std;


int n, l, h[1000];


int main()
{
    cin >> n >> l;

    for (int i = 0; i < n; i++)
        cin >> h[i];

    sort(h, h + n);

    for (int i = 0; i < n; i++)
        if (h[i] <= l) 
            l++;

    cout << l << '\n';

    return 0;
}
